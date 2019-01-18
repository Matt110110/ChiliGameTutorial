/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	if (wnd.kbd.KeyIsPressed(VK_LEFT) && x > 0)
	{
		x--;
		WIDTH--;
	}
	if (wnd.kbd.KeyIsPressed(VK_RIGHT) && WIDTH < gfx.ScreenWidth - 2)
	{
		x++;
		WIDTH++;
	}
	if (wnd.kbd.KeyIsPressed(VK_UP) && y > 0)
	{
		y--;
		HEIGHT--;
	}
	if (wnd.kbd.KeyIsPressed(VK_DOWN) && HEIGHT < gfx.ScreenHeight - 2)
	{
		y++;
		HEIGHT++;
	}

	if (wnd.kbd.KeyIsPressed('W') && HEIGHT > 0)
	{
		HEIGHT--;
	}
	if (wnd.kbd.KeyIsPressed('S') && HEIGHT < gfx.ScreenHeight - 1)
	{
		HEIGHT++;
	}
	if (wnd.kbd.KeyIsPressed('A') && WIDTH > 0)
	{
		WIDTH--;
	}
	if (wnd.kbd.KeyIsPressed('D') && WIDTH < gfx.ScreenWidth - 1)
	{
		WIDTH++;
	}
}

void Game::draw()
{
	for (int i = x; i < WIDTH; i++)
	{
		for (int j = y; j < HEIGHT; j++)
		{
			gfx.PutPixel(i, j, 255, 243, 125);
		}
	}
}

void Game::ComposeFrame()
{
	draw();
}
