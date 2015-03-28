#include"MyStack.h"
#include<iostream>
using namespace std;

MyStack::MyStack(int size)// constructor
{
	this->numberOfitems = size;
	items = new int[numberOfitems];
	int topOfMyStack = -1;
}

MyStack::~MyStack()// destructor
{
	delete[] items;
}

bool MyStack::isFull()
{
	if (topOfMyStack < numberOfitems - 1)
	{
		return false; //it is not the top yet
	}
	else
	{
		return true;
	}

}

bool MyStack::isEmpty()
{
	if (topOfMyStack == 1)
	{
		return true; //the stack is empty
	}
	else
	{
		return false;
	}

}

void MyStack::push(int x)
{
	if (!isFull)
	{
		items[topOfMyStack] = x;
	}
}

int MyStack::pop()
{
	int myItem = 0;// value to be popped
	  if (isEmpty())
	  {
		  myItem = items[topOfMyStack];
	  }
	  return myItem;
}