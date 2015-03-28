#include"MyStack.h"
#include<iostream>
using namespace std;

MyStack::MyStack(int size)// constructor
{
	this->numberOfitems = size;
	items = new int[numberOfitems]; // allocates memory for the stack
	int topOfMyStack = -1; // initial value of the stack when the instance of the stack is declared
	peekMe = 0;
}

MyStack::~MyStack()// destructor
{
	delete[] items;// delete the memory used by MyStack
}
void MyStack::setPeekItem(int num)
{
	peekMe = num;
}

int MyStack::getPeekItem()
{
	return peekMe;
}

bool MyStack::isFull()
{
	if (topOfMyStack < numberOfitems - 1) // the top of the stack is the number of elements subtract 1
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
	if (topOfMyStack == -1) //  the topOfMyStack attribute is equal to neg one
	{
		return true; //then stack is empty
	}
	else
	{
		return false;// the are items inside the stack
	}

}

void MyStack::push(int x)
{
	bool isvalid = isFull();
	if (isvalid == true) // check if the stack is full
	{
		topOfMyStack++; // increment topOfMyStack to put an item and not overwritting the previous one
		items[topOfMyStack] = x; // pusing value into the stack
	}
}

int MyStack::pop()
{
	int myItem = 0;// value to be popped
	  if (isEmpty())// check if the stack 
	  {
		  myItem = items[topOfMyStack];// getting the value 
		  topOfMyStack--; // looking at the next item and deleting the popped item element
	  }
	  return myItem;
}

void MyStack::peek()
{
	int i;
	
		
	for (i = 0; i<numberOfitems; i++)
		{
			if (items[i] == peekMe)
			{
				 cout << "Element found at position " << (i + 1);
			}
			else
				cout << "Element not found!"; exit(0);
	       }
}
