#pragma once
#include "Graphics.h"

class Person
{
	int x, y;
public:
	static constexpr int HEIGHT = 20, WIDTH = 20;

	void Draw(Graphics &) const;
	// Setters
	inline void setX(int value) { x = value; }
	inline void setY(int value) { y = value; }

	// Getters
	inline int getX() { return x; }
	inline int getY() { return y; }

	// Detects boundary collision
	void Update();
	Person();
	~Person();
};

