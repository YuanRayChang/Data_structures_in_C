#include <stdio.h>
#include <stdlib.h>
#define SWAP(x, y, t) (t=x, x=y, y=t)
void perm(char *list, int i, int n);

void main()
{

	char list[] = {'b', 'c', 'd','2','5'};
	char *plist;
	plist = list;
	int length_list = sizeof(list)/sizeof(char);
	for (; *plist != '\0'; plist++){
		printf("%c", *plist);
	}
	printf("\n");

	perm(list, 1, 3);
	printf("\n");
	system("pause");
}

void perm(char *list, int i, int n)
{
	// generate all the permutation of list[i] to list[n]
	int j, temp;
	if (i==n){
		for (j=0; j<=n; j++){
			printf("%c", list[j]);
		}
		printf("   ");
	}
	else {
		for (j=i; j<=n; j++){
			SWAP(list[i], list[j], temp);
			perm(list, i+1, n);
			SWAP(list[i], list[j], temp);
		}
	}
}