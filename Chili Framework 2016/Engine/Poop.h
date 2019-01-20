#pragma once
#include "Graphics.h"

class Poop
{
	int x, y, vx, vy;
public:
	static constexpr int WIDTH = 24, HEIGHT = 24;
	bool poopIsEaten = false;

	// Update velocity and collision testing
	void Update();

	void Draw(Graphics &) const;
	// Setters
	inline void setX(int value) { x = value; }
	inline void setY(int value) { y = value; }
	inline void setVX(int value) { vx = value; }
	inline void setVY(int value) { vy = value; }
	
	// Getters
	inline int getX() { return x; }
	inline int getY() { return y; }
	inline int getVX() { return vx; }
	inline int getVY() { return vy; }
	Poop();
	~Poop();
};

