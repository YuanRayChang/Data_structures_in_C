#include "pch.h"
#include <iostream>
#include "Stack.h"
#include "Horse.h"
using namespace std;
template <class T>
Stack<T>::Stack(int stackCapacity) : capacity(stackCapacity) {
	stack = new T[capacity];
	top = -1;
}

template <class T>
bool Stack<T>::IsEmpty() const {
	return top == -1;
}

template <class T>
T& Stack<T>::Top() const {
	if (IsEmpty()) {
		//throw "stack is empty.";
		cout << "stack is empty." << endl;
		exit(EXIT_FAILURE);

	}
	return stack[top];
}

template <class T>
void Stack<T>::Push(const T& item) {
	if (top == capacity - 1) {
		//throw "stack overflows";
		cout << "stack is empty." << endl;
		exit(EXIT_FAILURE);
	}
	stack[++top] = item;
}

template <class T>
void Stack<T>::Pop() {
	if (IsEmpty()) {
		//throw "Stack is empty. Cannot delete.";
		cout << "Stack is empty. Cannot delete." << endl;
		exit(EXIT_FAILURE);
	}
	stack[top--].~T();
}

template <class T>
int Stack<T>::gettop() {
	return top;
}


// Tell the compiler, at the end of Stack.cpp, 
// which particular template classes will be required, 
// forcing it to compile Stack<Horse>.
// 
// or
// 
// Put the implementation of the member functions in the header file 
template class Stack<Horse>;