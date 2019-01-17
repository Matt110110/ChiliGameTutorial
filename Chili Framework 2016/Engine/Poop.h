#pragma once
class Poop
{
public:
	// Member variables
	int x, y, vx, vy;
	const int WIDTH = 24, HEIGHT = 24;
	bool poopIsEaten = false;

	// Member functions

	void Update();
	Poop();
	~Poop();
};

