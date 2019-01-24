#include "Snake.h"
#include <assert.h>


Snake::Snake(const Location & loc)
{
	segments[0].InitHead(loc);
}

void Snake::MoveBy(const Location & loc)
{
	for (int i = nSegments - 1; i > 0; i--)
	{
		segments[i].Follow(segments[i - 1]);
	}
	segments[0].MoveBy(loc);
}

void Snake::Grow()
{
	if (nSegments < nSegmentMax)
	{
		segments[nSegments].InitBody();
		nSegments++;
	}
}

void Snake::Draw(Board & board) const
{
	for (int i = 0; i < nSegments; i++)
	{
		segments[i].Draw(board);
	}
}

Location Snake::GetNextHead(const Location & delta_loc) const
{
	auto loc = segments[0].getLocation();
	Location l = { (std::get<0>(loc) + std::get<0>(delta_loc)),(std::get<1>(loc) + std::get<1>(delta_loc)) };
	return l;
}

Snake::~Snake()
{
}

void Snake::Segment::InitHead(const Location & in_loc)
{
	loc = in_loc;
	c = Snake::headColor;
}

void Snake::Segment::InitBody()
{
	c = Snake::bodyColor;
}

void Snake::Segment::Follow(const Segment & segment)
{
	loc = segment.loc;
}

void Snake::Segment::Draw(Board & board) const
{
	board.DrawCell(loc, c);
}

void Snake::Segment::MoveBy(const Location & delta_loc)
{
	// Asserts that the snake can move only in X or Y axis and not in both
	//assert(std::abs(std::get<0>(delta_loc)) + std::abs(std::get<1>(delta_loc)) == 1);
	auto x = std::get<0>(loc) + std::get<0>(delta_loc);
	auto y = std::get<1>(loc) + std::get<1>(delta_loc);
	loc = { x,y };
}

Location Snake::Segment::getLocation() const
{
	return loc;
}
