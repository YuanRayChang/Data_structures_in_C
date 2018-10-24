#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void my_strncpy(char *s, char *t, int n);
void main()
{
	char s1[] = "This is a book";
	char s2[] = "This is a book";

	char t[] = "book";

	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	printf("t = %s\n", t);
	printf("s1 became: %s\n", strncpy(s1, t, 3));
	my_strncpy(s2, t, 3);
	printf("s2 became: %s\n", s2);


	system("pause");
}

void my_strncpy(char *s, char *t, int n)
{
	
	while(*t && n-- > 0)
		*s++ = *t++;
	while(n-- > 0)
		*s++ = '\0';

}