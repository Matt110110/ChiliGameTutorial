#include "Board.h"
#include <assert.h>


void Board::DrawCell(const Location& loc, Color c)
{
	int x = std::get<0>(loc);
	int y = std::get<1>(loc);
	assert(x >= 0);
	assert(x < width);
	assert(y >= 0);
	assert(y < height);
	gfx.DrawRect({ x * dimens, y * dimens }, dimens, dimens, c);
}

Board::Board(Graphics & gfx) : gfx(gfx)
{
}


Board::~Board()
{
}
