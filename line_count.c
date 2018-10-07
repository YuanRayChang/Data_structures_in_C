#include <stdio.h>
int main()
{
	int c, nl;
	nl = 0;
	while((c=getchar()) != EOF) //enter ( ctrl + z ) to terminate the while loop
		if(c=='\n')
			++nl;
	printf("%d\n", nl);
 
	getchar();
	return 0;
}