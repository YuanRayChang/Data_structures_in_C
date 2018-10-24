#include <stdio.h>
#include <stdlib.h>
void main()
{
	printf("1D array:\n");
	double value[10] = {0};
	value[1] = 1;
	double *pvalue = value;
	printf("value[0] = %f\n", *pvalue);

	double *pvalue2 = &value[0];
	printf("value[0] = %f\n", *pvalue2);

	pvalue++;
	printf("value[1] = %f\n", *pvalue);

	value[3] = 3;
	pvalue = &value[3]; //directly point to [3]
	printf("value[3] = %f\n", *pvalue);


	printf("\n2D array:\n");
	double bean[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	double *pbean = &bean[0][0];
	double *pbean2 = bean[0];
	printf("bean[0][0] = %f\n", *pbean);
	printf("bean[0][0] = %f\n", *pbean2);



	system("pause");
}