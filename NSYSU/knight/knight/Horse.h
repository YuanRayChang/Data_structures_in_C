#pragma once
#ifndef HORSE_H
#define HORSE_H

class Horse
{
	public:
		int row;
		int col;
		int dir;
		Horse(int r = 1, int c = 1, int d = 1);
};

#endif // !HORSE_H
