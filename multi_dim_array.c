#include <stdio.h>
#include <stdlib.h>
void main()
{

	double a1[][4] = {
					  {2.2, 5.1, 3}, 
					  {1, 2.3} 
					 };

	char a2[][10] = {
					  "cat",
					  "dog",
					  "cow",
					  "nothing"
					};

	for(int i=0; i<sizeof(a1)/sizeof(a1[0]); i++){
		for(int j=0; j<sizeof(a1[0])/sizeof(double); j++){
			printf("a1 %d %d = %f\n",i, j, a1[i][j]);
		}
	}

	printf("\n");

	for(int i=0; i<sizeof(a2)/sizeof(a2[0]); i++){
		printf("a2 %d = %s\n",i , a2[i]);
	}

	printf("\n");

	for(int i=0; i<sizeof(a2)/sizeof(a2[0]); i++){
		for(int j=0; j<sizeof(a2[0])/sizeof(char); j++){
			printf("%c ",a2[i][j]);  // use %c to print a single char
		}
		printf("\n");
	}
	printf("%c", a2[0][0]);

	system("pause");
}