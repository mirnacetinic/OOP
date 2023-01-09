#pragma once
#include "Jumper.h"
#include "Platforms.h"

class Game
{
private:
	RenderWindow* window;
	Sprite background;
	Texture backgroundTex;
	View view,defaultView;
	Text text;

	Jumper* jumper;
	Platform* plat;

	bool jumperDead;


	//inicijalizacija
	void initWin();
	void initVar();
	

public:
	//Konstruktor i destruktor
	Game();;
	virtual ~Game();

	void play();
	void closeWin();
	void updateJumper();
	void updatePlat();
	void updateView();

	//update vrijednosti
	void update();

	//crtanje
	void show();

	//Dohvaæanje
	View getView();

};

