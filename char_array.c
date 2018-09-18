#include <stdio.h>
#include <stdlib.h>
void main()
{
	char a1[] = {'a', 'e', 'i' , 'o' ,'u'}; // length is 5
	char a2[] = "aeiou"; // length is 6

	printf("length of a1: %d\n", sizeof(a1)/sizeof(a1[0]));  
	printf("length of a2: %d\n", sizeof(a2)/sizeof(a2[0]));  

	system("pause");
}