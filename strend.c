#include <stdio.h>
#include <stdlib.h>
int my_strend(char *s, char *t);
void main()
{
	char s[] = "This is a book";
	char t[] = "book";
	char t1[] = "box";

	printf("s = %s\n", s);
	printf("t = %s\n", t);
	printf("t1 = %s\n", t1);
	printf("t in the end of s: %d\n", my_strend(s, t)); //both works, list or pointer
	printf("t1 in the end of s: %d\n", my_strend(&s[0], &t1[0]));  //

	system("pause");
}

int my_strend(char *s, char *t)
{
	// record the first character in the array
	char *bs = s;
	char *bt = t;

	// go to the end of array
	while(*s++);
	s--;
	while(*t++);
	t--;
	
	for(; *s == *t; s--, t--)
		if(t == bt || s == bs)
			break;
	if(*s == *t && t == bt && *s!='\0')
		return 1;
	else
		return 0;
}