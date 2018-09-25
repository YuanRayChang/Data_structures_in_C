#include <stdio.h>
#include <stdlib.h>
void main()
{
	char a1[] = {'a', 'e', 'i' , 'o' ,'u'}; // length is 5
	char a11[] = {'a', 'e', 'i' , 'o' ,'u', '\0'}; // length is 6
	char a2[] = "aeiou"; // length is 6
	
	printf("length of a1: %d\n", sizeof(a1)/sizeof(a1[0]));  
	printf("length of a11: %d\n", sizeof(a11)/sizeof(a11[0])); 
	printf("length of a2: %d\n", sizeof(a2)/sizeof(a2[0]));  
	printf("a1 = %s\n", a1); //some proble here!
	printf("a11 = %s\n", a11);
	printf("a2 = %s\n", a2);
	printf("a1[1] = %c\n", a1[1]);
	printf("a2[1] = %c\n", a2[1]);


	// Using pointer

	char *pa = "aeiou";
	printf("pa = %s\n", pa);
	printf("pa[0] = %c\n", *pa);
	pa++;
	printf("pa[1] = %c\n", *pa);


	system("pause");
}