#pragma once
#include "Graphics.h"
#include <tuple>

class Board
{
	static constexpr int dimens = 20;
	static constexpr int width = 10, height = 10;
	Graphics & gfx;
public:
	void DrawCell(std::tuple<int, int> & loc, Color c);

	inline int getWidth() { return width; }
	inline int getHeight() { return height; }
	inline int getDimens() { return dimens; }

	Board(Graphics & gfx);
	~Board();
};

