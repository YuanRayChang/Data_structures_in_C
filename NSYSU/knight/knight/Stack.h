#pragma once
#ifndef STACK_H
#define STACK_H

template <class T>
class Stack
{
	public:
		Stack(int stackCapacity=10);
		bool IsEmpty() const;
		T& Top() const;
		void Push(const T& item);
		void Pop();
		int gettop();
		
	private:
		int top; // array index of top element
		int capacity; // size of stack
		T* stack; // array for stack
};

#endif 
