
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "Jumper.h"


using namespace sf;


class Platform
{
private:
	Sprite plat;
	Texture tex1;
	Vector2f xy;
	std::vector<Vector2f>position;

	float theHighest;
	float theLoweest;
	

public:
	Platform();
	virtual ~Platform();

	bool jumpedOn(Jumper* doodle);

	void show(RenderTarget& target);
	void drop(Jumper* doodle);
	void initTex();

	std::vector<Vector2f> getPos(); 
	float getTheLowestPlat();
};

