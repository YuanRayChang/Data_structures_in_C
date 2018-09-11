// allocation and deallocation of memory
#include <stdio.h>
#include <stdlib.h>

#define MALLOC(p, s) \
	if (!(p=malloc(s))) { \
		fprintf(stderr, "Insufficient memory"); \
	exit(EXIT_FAILURE); \
}

int main(){


int  i, *pi;
float f, *pf;

// allocate memory
pi = (int *)malloc(sizeof(int));
pf = (float *)malloc(sizeof(float));

// a more robust way to allocate memory
if ((pi = (int *)malloc(sizeof(int))) == NULL || 
	(pf = (float *)malloc(sizeof(float))) == NULL)
{
	fprintf(stderr, "Insufficient memory");
	exit(EXIT_FAILURE);
}

// same as above
if (!(pi = malloc(sizeof(int))) || 
	!(pf = malloc(sizeof(float))))
{
	fprintf(stderr, "Insufficient memory");
	exit(EXIT_FAILURE);
}

// Use macro to allocate memory
MALLOC(pi, sizeof(int));
MALLOC(pf, sizeof(float));

*pi = 1024;
*pf = 3.14;
printf("an integer = %d, a float = %f\n", *pi, *pf);
free(pi);
free(pf);
 
return 0;
}