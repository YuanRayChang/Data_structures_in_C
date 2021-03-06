// knight.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
#include <iomanip> // for setw()
#include "Stack.h"
#include "Horse.h"
using namespace std;

Horse& move(Horse& h, int** chess, int n);

int main()
{
	for (int n = 1; n <= 4; n++) {
		cout << "n = " << n << ": no solution" << endl;
	}
	
	for (int n = 5; n <= 7; n++) {
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

		Horse next;
		Horse horse(1, 1, 1);
		Stack<Horse> stack_horse(n*n);
		stack_horse.Push(horse);
		chess[0][0] = 1;

		while (stack_horse.gettop() != n * n - 1) {

			next = move(stack_horse.Top(), chess, n);

			if (next.row == -1) {
				chess[stack_horse.Top().row - 1][stack_horse.Top().col - 1] = 0;
				stack_horse.Pop();
				stack_horse.Top().dir++;
				//cout << "POP" << endl;
			}
			else {
				stack_horse.Push(next);
				chess[next.row - 1][next.col - 1] = stack_horse.gettop() + 1;
			}
			//cout << stack_horse.gettop() + 1 << endl;

		}

		cout << "n = " << n << ":" << endl;
		// output the path
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << setw(4) << chess[i][j] << "  ";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}

Horse& move(Horse& h, int** chess, int n) {
	int r = -1;
	int c = -1;
	int rt, ct;
	
	for (int i = h.dir; i <= 8; i++) {
		if (i == 1) {
			rt = h.row - 2;
			ct = h.col + 1;
			if ((rt > 0) && (ct > 0) && (rt <= n) && (ct <= n) && (chess[rt-1][ct-1] == 0)) {
				h.dir = i;
				r = rt;
				c = ct;
				break;
			}
		}
		else if (i == 2) {
			rt = h.row - 1;
			ct = h.col + 2;
			if ((rt > 0) && (ct > 0) && (rt <= n) && (ct <= n) && (chess[rt - 1][ct - 1] == 0)) {
				h.dir = i;
				r = rt;
				c = ct;
				break;
			}
		}
		else if (i == 3) {
			rt = h.row + 1;
			ct = h.col + 2;
			if ((rt > 0) && (ct > 0) && (rt <= n) && (ct <= n) && (chess[rt - 1][ct - 1] == 0)) {
				h.dir = i;
				r = rt;
				c = ct;
				break;
			}
		}
		else if (i == 4) {
			rt = h.row + 2;
			ct = h.col + 1;
			if ((rt > 0) && (ct > 0) && (rt <= n) && (ct <= n) && (chess[rt - 1][ct - 1] == 0)) {
				h.dir = i;
				r = rt;
				c = ct;
				break;
			}
		}
		else if (i == 5) {
			rt = h.row + 2;
			ct = h.col - 1;
			if ((rt > 0) && (ct > 0) && (rt <= n) && (ct <= n) && (chess[rt - 1][ct - 1] == 0)) {
				h.dir = i;
				r = rt;
				c = ct;
				break;
			}
		}
		else if (i == 6) {
			rt = h.row + 1;
			ct = h.col - 2;
			if ((rt > 0) && (ct > 0) && (rt <= n) && (ct <= n) && (chess[rt - 1][ct - 1] == 0)) {
				h.dir = i;
				r = rt;
				c = ct;
				break;
			}
		}
		else if (i == 7) {
			rt = h.row - 1;
			ct = h.col - 2;
			if ((rt > 0) && (ct > 0) && (rt <= n) && (ct <= n) && (chess[rt - 1][ct - 1] == 0)) {
				h.dir = i;
				r = rt;
				c = ct;
				break;
			}
		}
		else if (i == 8) {
			rt = h.row - 2;
			ct = h.col - 1;
			if ((rt > 0) && (ct > 0) && (rt <= n) && (ct <= n) && (chess[rt - 1][ct - 1] == 0)) {
				h.dir = i;
				r = rt;
				c = ct;
				break;
			}
		}
	}
	
	Horse temp(r, c, 1);
	
	return temp;
}

