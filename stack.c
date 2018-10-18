#include <stdio.h>
#define MAX_STACK_SIZE 100

typedef struct element{
	int key;
} element;
element stack[MAX_STACK_SIZE];
int top = -1;

void push(element item);
element pop();
void stackFull();
void stackEmpty();

int main()
{


	getchar();
	return 0;
}

void push(element item)
{
	if(top >= MAX_STACK_SIZE-1){
		stackFull();
	}
	stack[++top] = item;
}

element pop()
{
	if(top == -1){
		return stackEmpty();
	}
	return stack[top--];
}

void stackFull()
{
	fprintf(stderr, "stack is full, cannot add element");
	exit(EXIT_FAILURE);
}

void stackEmpty()
{
	fprintf(stderr, "stack is empty, cannot delete element");
	exit(EXIT_FAILURE);
}