#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_SIZE 101
#define COMPARE(x,y) ((x<y)?-1 : (x==y)?0 : 1)
#define SWAP(x, y, t) (t=x, x=y, y=t)
int binsearch(int list[], int searchnum, int left, int right);
int binsearch_recur(int list[], int searchnum, int left, int right);
void sort(int list[], int n);
void main()
{
int i, n;
	int list[MAX_SIZE];
	printf("Enter the number of numbers to generate: ");
	scanf("%d", &n);
	if (n<1 || n>MAX_SIZE){
		fprintf(stderr, "Improper value of n\n");
		exit(EXIT_FAILURE);
	}

	for (i=0; i<n; i++){
		list[i] = rand() % 1000;
		printf("%d ",list[i]);
	}

	sort(list, n);
	printf("\nSorted array:\n");
	for(i=0; i<n; i++){
		printf("%d ",list[i]);
	}
	printf("\n");

	// Test the binary search function
	int m;
	printf("Input a number: ");
	scanf("%d", &m);
	int search_result = binsearch(list, m, 0, n);
	
	if (search_result==-1){
		printf("The number is not in the list.\n");
	}
	else{
		printf("The number is in index: %d \n", search_result);
	}

	// Test the binary search function with recursive algorithm
	printf("Input a number: ");
	scanf("%d", &m);
	search_result = binsearch_recur(list, m, 0, n);
	
	if (search_result==-1){
		printf("The number is not in the list.\n");
	}
	else{
		printf("The number is in index: %d \n", search_result);
	}

system("pause");
}

int binsearch(int list[], int searchnum, int left, int right)
{
	int middle;
	while(left<=right)
	{
		middle = (left+right)/2;
		switch (COMPARE(list[middle], searchnum))
		{
			case -1: left = middle + 1;
					break; //important to put "break" here!
			case 0: return middle;
			case 1: right = middle - 1;
		}

	}
	return -1;
}

int binsearch_recur(int list[], int searchnum, int left, int right)
{
	int middle;
	while(left<=right)
	{
		middle = (left+right)/2;
		switch (COMPARE(list[middle], searchnum))
		{
			case -1: return binsearch_recur(list, searchnum, middle + 1, right);
			case 0: return middle;
			case 1: return binsearch_recur(list, searchnum, left, middle - 1);
		}

	}
	return -1;
}

int compare(int x, int y)
{
	if (x<y){
		return -1;
	}
	else if (x==y){
		return 0;
	}
	else
		return 1;
}

void sort(int list[], int n)
{
	int i, j, min, temp;
	for(i=0; i<n-1; i++){
		min = i;
		for(j=i; j<n; j++){
			if(list[j] < list[min])
				min = j;
			SWAP(list[i], list[min], temp);
		}
	}
}