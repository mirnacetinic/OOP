#include "Jumper.h"
#include "define.h"

void Jumper::initTex()
{
	this->tex.loadFromFile(DOODLER);
}

void Jumper::initDoodler()
{
	this->doodler.setTexture(this->tex);
}


Vector2f Jumper::getPosition()
{
	return this->position;
}

const float Jumper::getHead()
{
	return (this->doodler.getTextureRect().top);
}

const float Jumper::getWidth()
{
	return (this->doodler.getTextureRect().width);
}

const float Jumper::getHeight()
{
	return (this->doodler.getTextureRect().height);
}

bool Jumper::getonPlat()
{
	return this->onPlat;
}

bool Jumper::isJumping()
{
	return this->jumping;
}

Jumper::Jumper() :jumpLen(0), onPlat(1)
{
	this->initTex();
	this->initDoodler();
	this->position.x = 300.f;
	this->position.y= 700.f;
	this->setPosition();
}

Jumper::~Jumper()
{
}

void Jumper::move(const float x1, const float y1)
{
	this->doodler.move(SPEED * x1,SPEED * y1);
}

void Jumper::update()
{
	if (Keyboard::isKeyPressed(Keyboard::Left))
	{
		if (this->position.x <= 0-doodler.getTextureRect().width)
		{
			position.x = 600;
		}
		else {
			this->doodler.move(-2.f * SPEED, 0.f);
			position.x -= 2 * SPEED;
		}
	}
	if (Keyboard::isKeyPressed(Keyboard::Right))
	{
		if (this->position.x >= 600+this->doodler.getTextureRect().width)
		{
			position.x =-this->doodler.getTextureRect().width;
		}

		else {
			this->doodler.move(+2.f * SPEED, 0.f);
			position.x += 2 * SPEED;
		}
	}

	jumping = 0;
	jumpLen += GRAVITY;
	position.y+= jumpLen;

	if (jumpLen < 0)
	{
		jumping = 1;
	}

	if (position.y > WIN_HEIGHT - this->doodler.getTextureRect().height && onPlat)
	{
		jump();
	}

	this->setPosition();
}

void Jumper::setPosition()
{
	this->doodler.setPosition(position);
}

void Jumper::setOnPlat(bool i)
{
	onPlat = i;
}

void Jumper::setY(float y1)
{
	this->position.y = y1;
}

void Jumper::setJumpLen(float jL)
{
	this->jumpLen = jL;
}

void Jumper::show(RenderTarget&target)
{
	target.draw(this->doodler);
}

void Jumper::jump()
{
	jumpLen = -10;
}


