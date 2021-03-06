// knight_recursion.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
#include <iomanip> // for setw()
using namespace std;

bool solve(int r, int c, int step, int** chess, int n);
void printSolution(int** chess, int n);
bool isSafe(int r, int c, int** chess, int n);

int main()
{
	
	int n;
	for (n = 1; n < 7; n++) {
		int** chess;
		chess = new int *[n];
		for (int i = 0; i < n; i++) {
			chess[i] = new int[n];
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				chess[i][j] = 0;
			}
		}


		chess[0][0] = 1;
		cout << "n = " << n << ":" << endl;


		if (solve(0, 0, 2, chess, n) == false)
		{
			cout << "Solution does not exist" << endl;
		}
		else {
			if (n == 1) {
				cout << "Solution does not exist" << endl;
			}
			else {
				printSolution(chess, n);
			}
		}
	}
	

}


void printSolution(int** chess, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(4) << chess[i][j] << "  ";
		}
		cout << endl;
	}
}

bool isSafe(int r, int c, int** chess, int n) {
	if ((r >= 0) && (c >= 0) && (r < n) && (c < n) && (chess[r][c] == 0)) {
		return true;
	}
	else {
		return false;
	}
}

bool solve(int r, int c, int step, int** chess, int n) {

	if (step == n * n + 1) {
		return true;
	}
	
	int rMove[8] = { -2, -1, 1, 2, 2, 1,  -1,  -2 };
	int cMove[8] = { 1, 2,  2,  1, -1, -2, -2, -1 };

	int r_next, c_next;

	for (int k = 0; k < 8; k++) {
		r_next = r + rMove[k];
		c_next = c + cMove[k];
		if (isSafe(r_next, c_next, chess, n)) {
			chess[r_next][c_next] = step;
			if (solve(r_next, c_next, step + 1, chess, n)) {
				return true;
			}
			else {
				chess[r_next][c_next] = 0;
			}
		}
	}

	return false;
}