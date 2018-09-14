#include <stdio.h>
#include <stdlib.h>

void my_strncat(char *s, char *t, int n);

void main()
{
	char src[] = "The first.";
	char src2[] = "The Second.";

	my_strncat(src, src2, 4);
	printf("After strncat: %s\n", src);

	system("pause");
}

void my_strncat(char *s, char *t, int n)
{
	while(*s)
		s++;
	while(*t && n>0){
		n--;
		*s++ = *t++;
	}
}