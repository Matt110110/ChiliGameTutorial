#include "Person.h"
#include "Graphics.h"

void Person::Update()
{
	const int right = x + WIDTH;
	const int bottom = y + HEIGHT;
	if (x <= 0)
	{
		x = 0;
	}
	else if (right >= Graphics::ScreenWidth)
	{
		x = (Graphics::ScreenWidth - 1) - WIDTH;
	}

	if (y <= 0)
	{
		y = 0;
	}
	else if (bottom >= Graphics::ScreenHeight)
	{
		y = (Graphics::ScreenHeight - 1) - HEIGHT;
	}
}

Person::Person()
{
}


Person::~Person()
{
}
