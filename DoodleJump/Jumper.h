#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "SFML/Window.hpp"
#include <SFML/System.hpp>
#include "SFML/Graphics/Sprite.hpp"
#include <vector>

using namespace sf;

class Jumper
{
private:
	Sprite doodler;
	Texture tex;
	Vector2f position;

	float jumpLen;

	bool jumping;
	bool onPlat;

	//inicijalizacija
	void initTex();
	void initDoodler();

public:
	Jumper();
	virtual ~Jumper();

	void update();
	void show(RenderTarget& target);
	void jump();
	void setPosition();
	void setOnPlat(bool i);
	void setY(float y1);
	void setJumpLen(float jL);
	void move(const float x1,const float y1);

	//dohvæanje
	Vector2f getPosition();
	const float getHead();
	const float getWidth();
	const float getHeight();
	bool getonPlat();
	bool isJumping();
};

