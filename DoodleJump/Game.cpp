#include "Game.h"
#include "define.h"

void Game::initWin()
{
	this->window = new RenderWindow(VideoMode(WIN_WIDTH,WIN_HEIGHT), "Doodle Jump", Style::Close | Style::Titlebar);
	this->window->setFramerateLimit(90);
	this->backgroundTex.loadFromFile(BACKGROUND);
	this->background.setTexture(backgroundTex);
	this->background.scale(2, 2);
	this->view.setSize(WIN_WIDTH,WIN_HEIGHT);
	this->defaultView = window->getDefaultView();
	this->view.setCenter(WIN_WIDTH/2.f, jumper->getPosition().y-this->jumper->getHeight());

}

void Game::initVar()
{
	this->plat = new Platform();
	this->jumper = new Jumper();

}


Game::Game():jumperDead(0)
{
	this->initVar();
	this->initWin();

}

Game::~Game()
{
	delete this->window;
	delete this->jumper;
	delete this->plat;
	
}

void Game::play()
{
	while (this->window->isOpen())
	{
		this->update();
		this->show();
	}

}

void Game::closeWin()
{
	Event ev;
	if (this->jumperDead)
	{
		this->window->close();

	}

	while (this->window->pollEvent(ev))
	{
		if (ev.Event::type == Event::Closed || ev.Event::KeyPressed && ev.Event::key.code == Keyboard::Escape)
		{
			this->window->close();
		}

	}

}

void Game::updateJumper(){

	this->jumper->update();
	if (this->jumper->getPosition().y > this->plat->getTheLowestPlat() + this->jumper->getHeight())
	{
		this->jumperDead=1;
		this->closeWin();
	}

}

void Game::updatePlat()
{
	if (!jumperDead)
	this->plat->jumpedOn(this->jumper);

}

void Game::updateView()
{
	this->view.setCenter(WIN_WIDTH/2, jumper->getPosition().y - this->jumper->getHeight());
}


void Game::update()
{
	this->closeWin();
	this->updateJumper();
	this->updateView();
	this->updatePlat();
	


}

void Game::show()
{
	//brisanje starog
	this->window->clear();
	//Crtanje
	this->window->setView(defaultView);
	this->window->draw(this->background);
	this->window->setView(view);
	this->plat->show(*this->window);
	this->jumper->show(*this->window);
	
	
	//prikaz novog

	this->window->display();

}

View Game::getView()
{
	return this->view;
}
