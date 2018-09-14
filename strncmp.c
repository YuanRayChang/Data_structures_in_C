#include <stdio.h>
#include <stdlib.h>
int my_strncmp(char *s, char *t, int n);
void main()
{
	char s[] = "This is a book";
	char t[] = "book";
	printf("s-t = %d \n", my_strncmp(s, t, 5));
	system("pause");
}

int my_strncmp(char *s, char *t, int n)
{
	for(; *s == *t; s++, t++)
		if(*s == '\0' || --n<=0)
			return 0;
	return *s - *t;
	
}