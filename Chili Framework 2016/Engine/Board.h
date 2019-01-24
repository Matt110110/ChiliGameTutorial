#pragma once
#include "Graphics.h"
#include <tuple>

#define Location std::tuple<int, int>

class Board
{
	static constexpr int dimens = 20;
	static constexpr int width = 10, height = 10;
	Graphics & gfx;
public:
	void DrawCell(const Location & loc, Color c);
	bool IsInsideBoard(const Location & loc) const;

	inline int getWidth() { return width; }
	inline int getHeight() { return height; }
	inline int getDimens() { return dimens; }

	Board(Graphics & gfx);
	~Board();
};

