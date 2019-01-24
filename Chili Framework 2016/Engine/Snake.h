#pragma once
#include <tuple>
#include "Board.h"
#include "Colors.h"

#define Location std::tuple<int, int>

class Snake
{
private:
	// Internal segment class
	class Segment
	{
	public:
		void InitHead(const Location & in_loc);
		void InitBody();

		void Follow(const Segment & segment);
		void Draw(Board & board) const;
		void MoveBy(const Location & delta_loc);

		Location getLocation() const;
	private:
		Location loc;
		Color c;
	};

	static constexpr Color headColor = Colors::Yellow;
	static constexpr Color bodyColor = Colors::Green;
	static constexpr int nSegmentMax = 100;
	Segment segments[nSegmentMax];
	int nSegments = 1;
public:
	void MoveBy(const Location & loc);
	void Grow();
	void Draw(Board & board) const;

	Location GetNextHead(const Location & delta_loc) const;

	Snake( const Location & loc );
	~Snake();
};

