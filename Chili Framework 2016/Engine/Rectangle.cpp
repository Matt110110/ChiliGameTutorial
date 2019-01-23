#include "Rectangle.h"

void Rectangles::Init(int xVal, int yVal, int widthVal, int heightVal, Color _c)
{
	x = xVal;
	y = yVal;
	width = widthVal;
	height = heightVal;
	c = _c;
}

void Rectangles::Init(int xVal, int yVal, int val, Color _c)
{
	x = xVal;
	y = yVal;
	width = val;
	height = val;
	c = _c;
}

void Rectangles::Draw(Graphics & gfx) const
{
	for (int j = y; j < y + height; j++)
	{
		for (int i = x; i < x + width; i++)
		{
			gfx.PutPixel(i, j, c);
		}
	}
}

Rectangles::Rectangles()
{
}

Rectangles::~Rectangles()
{
}
