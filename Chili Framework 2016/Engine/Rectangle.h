#pragma once
#include <tuple>
#include "Colors.h"
#include "Graphics.h"

class Rectangles
{
	int x, y, width, height;
	Color c;
public:
	void Init(int xVal, int yVal, int widthVal, int heightVal, Color _c);
	void Init(int xVal, int yVal, int val, Color _c);

	inline void setX(int value) { x = value; }
	inline void setY(int value) { y = value; }
	inline void setWidth(int value) { width = value; }
	inline void setHeight(int value) { height = value; }
	inline void setColor(Color value) { c = value; }

	inline int getX() { return x; }
	inline int getY() { return y; }
	inline int getWidth() { return width; }
	inline int getHeight() { return height; }

	void Draw(Graphics & gfx) const;
	Rectangles();
	~Rectangles();
};

