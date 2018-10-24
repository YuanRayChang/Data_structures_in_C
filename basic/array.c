#include <stdio.h>
#include <stdlib.h>
void main()
{
	int value1[5] = {0};
	int value2[5] = {};
	for(int i=0; i<sizeof(value1)/sizeof(value1[0]); i++){
		printf("%d ", value1[i]);
	}

	printf("\n");
	for(int i=0; i<sizeof(value2)/sizeof(value2[0]); i++){
		printf("%d ", value2[i]);
	}

system("pause");
}