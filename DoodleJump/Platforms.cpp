#include "Platforms.h"
#include "define.h"
#include <random>

void Platform::initTex()
{
	this->tex1.loadFromFile(PLATFORM);
	this->plat.setTexture(tex1);
	this->plat.scale(1.5,1.5);
}

std::vector<Vector2f> Platform::getPos()
{
	return position;
}

float Platform::getTheLowestPlat()
{
	return theLoweest;
}

Platform::Platform()
{
	float y1 = float(WIN_HEIGHT);
	float x1 = float(WIN_WIDTH / 2.f);
	this->theHighest = 0;
	this->initTex();

	for (int i = 0; i < NUM_OF_PLATS; i++)
	{
		xy.x = x1;
		xy.y = y1;

		if (y1 < theHighest)
		{
			theHighest = y1;
		}
		if (y1 > theLoweest)
		{
			theLoweest = y1;
		}
		position.push_back(xy);
		y1 -= 200.f;
		x1 = this->plat.getGlobalBounds().width / 2.f + rand() % WIN_WIDTH - this->plat.getGlobalBounds().width;
	}


}
Platform::~Platform()
{

}

bool Platform::jumpedOn(Jumper* doodle)
{
	for (int i = 0; i < NUM_OF_PLATS; i++)
	{
		if (!doodle->isJumping() && doodle->getPosition().x + doodle->getWidth() > position[i].x && doodle->getPosition().x < position[i].x + doodle->getWidth() &&
			doodle->getPosition().y +doodle->getHeight()< position[i].y +20 && doodle->getHeight() + doodle->getPosition().y>position[i].y)
		{
			doodle->setOnPlat(true);
			doodle->jump();
			this->drop(doodle);

			return true;
		}
	}
	doodle->setOnPlat(false);
	return false;
}


void Platform::show(RenderTarget& target)
{
	for (int i = 0; i < NUM_OF_PLATS; i++)
	{
		plat.setPosition(position[i]);
		target.draw(this->plat);
	}

}

void Platform::drop(Jumper* doodle)
{
		for (int i = 0; i < NUM_OF_PLATS; i++)
		{

			if (position[i].y>doodle->getPosition().y+300)
			{
				position[i].y =theHighest-200;
				theHighest -= 200;
				position[i].x = this->plat.getGlobalBounds().width / 2.f + rand() % WIN_WIDTH - this->plat.getGlobalBounds().width;
			}
	
			if (position[i].y > theLoweest)
			{
				theLoweest = position[i].y;
			}


		}
}
