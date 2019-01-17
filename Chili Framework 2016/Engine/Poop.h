#pragma once
class Poop
{
	static constexpr int WIDTH = 24, HEIGHT = 24;
	int x, y, vx, vy;
public:
	/**** Member variables ****/
	bool poopIsEaten = false;

	/***** Member functions ****/

	// Update velocity and collision testing
	void Update();
	inline void setX(int value) { x = value; }
	inline void setY(int value) { y = value; }
	inline void setVX(int value) { vx = value; }
	inline void setVY(int value) { vy = value; }
	inline int getWidth() { return WIDTH; }
	inline int getHeight() { return HEIGHT; }
	inline int getX() { return x; }
	inline int getY() { return y; }
	inline int getVX() { return vx; }
	inline int getVY() { return vy; }
	Poop();
	~Poop();
};

