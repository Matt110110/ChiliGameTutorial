#include "Board.h"
#include <assert.h>


void Board::DrawCell(const Location& loc, Color c)
{
	int x = std::get<0>(loc);
	int y = std::get<1>(loc);
	assert(x >= 0);
	assert(x < Graphics::ScreenWidth);
	assert(y >= 0);
	assert(y < Graphics::ScreenHeight);
	gfx.DrawRect({ x * dimens, y * dimens }, dimens, dimens, c);
}

bool Board::IsInsideBoard(const Location & loc) const
{
	auto x = std::get<0>(loc);
	auto y = std::get<1>(loc);
	return x >= 0 && x < width && y >= 0 && y < height;
}

Board::Board(Graphics & gfx) : gfx(gfx)
{
}


Board::~Board()
{
}
