#include <stdio.h>
#include <stdlib.h>

void my_strcat(char *s, char *t);

void main()
{
	char src[] = "The first.";
	char src2[] = " The Second.";

	my_strcat(src, src2);
	printf("After strcat: %s\n", src);

	system("pause");
}

void my_strcat(char *s, char *t)
{
	while(*s)
		s++;
	while(*s++ = *t++);
}