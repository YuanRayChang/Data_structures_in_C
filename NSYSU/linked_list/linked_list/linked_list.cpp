// linked_list.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
#include "Poly.h"
using namespace std;

void selection_sort(int len, int* coef, int* exp);
void print_result(int len, int* coef, int* exp);

int main()
{
	int count = 1;
	int len1, len2;

	while (1) {
		cin >> len1;
		int* coef1 = new int[len1];
		int* exp1 = new int[len1];
		for (int i = 0; i < len1; i++) {
			cin >> coef1[i] >> exp1[i];
		}
		cin >> len2;
		int* coef2 = new int[len2];
		int* exp2 = new int[len2];
		for (int i = 0; i < len2; i++) {
			cin >> coef2[i] >> exp2[i];
		}

		if ((len1 == 0) && (len2 == 0)) {
			return 0;
		}

		//print_result(len1, coef1, exp1);
		//print_result(len2, coef2, exp2);

		selection_sort(len1, coef1, exp1);
		selection_sort(len2, coef2, exp2);

		Poly A, B, C, D;
		for (int i = 0; i < len1; i++) {
			if (i < len1 - 1) {
				if (exp1[i + 1] == exp1[i]) {
					Node temp(coef1[i] + coef1[i + 1], exp1[i]);
					A.InsertTail(temp);
					i++;
				}
				else {
					Node temp(coef1[i], exp1[i]);
					A.InsertTail(temp);
				}
			}
			else {
				Node temp(coef1[i], exp1[i]);
				A.InsertTail(temp);
			}
		}

		for (int i = 0; i < len2; i++) {
			if (i < len2 - 1) {
				if (exp2[i + 1] == exp2[i]) {
					Node temp(coef2[i] + coef2[i + 1], exp2[i]);
					B.InsertTail(temp);
					i++;
				}
				else {
					Node temp(coef2[i], exp2[i]);
					B.InsertTail(temp);
				}
			}
			else {
				Node temp(coef2[i], exp2[i]);
				B.InsertTail(temp);
			}
		}

		//A.printPoly();
		//B.printPoly();
		cout << "Case" << count << ":" << endl;
		cout << "ADD" << endl;
		C = A + B;
		C.printPoly();
		cout << "MULTIPLY" << endl;
		D = A * B;
		D.printPoly();
		count++;
	}
	
}


void selection_sort(int len, int* coef, int* exp) {
	for (int i = 0; i < len; i++) {
		int k = i;
		for (int j = i+1; j < len; j++) {
			if (exp[j] > exp[k]) {
				k = j;
			}
		}
		int temp = exp[i];
		exp[i] = exp[k];
		exp[k] = temp;

		int temp2 = coef[i];
		coef[i] = coef[k];
		coef[k] = temp2;
	}
}

void print_result(int len, int* coef, int* exp) {
	cout << endl;
	for (int i = 0; i < len; i++) {
		cout << coef[i] << " " << exp[i] << endl;
	}
}

