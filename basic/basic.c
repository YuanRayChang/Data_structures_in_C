#include <stdio.h>

int main()
{
	
	int valid = 5;
	int not_valid = !valid;
	printf("%d\n", not_valid);
	valid = !not_valid;
	printf("%d\n", valid);

	char a = getchar();
	printf("%c\n", a);



	getchar();
	getchar();


	return 0;
}