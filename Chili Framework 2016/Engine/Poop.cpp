#include "Poop.h"
#include "Graphics.h"


void Poop::Update()
{
	x += vx;
	y += vy;

	const int right = x + WIDTH;
	const int bottom = y + HEIGHT;

	if (x < 5)
	{
		x = 5;
		vx *= -1;
	}
	else if (right >= Graphics::ScreenWidth - 5)
	{
		x = (Graphics::ScreenWidth - 5) - WIDTH;
		vx *= -1;
	}

	if (y < 5)
	{
		y = 5;
		vy *= -1;
	}
	else if (bottom >= Graphics::ScreenHeight - 5)
	{
		y = (Graphics::ScreenHeight - 5) - HEIGHT;
		vy *= -1;
	}
}

Poop::Poop()
{
}


Poop::~Poop()
{
}
