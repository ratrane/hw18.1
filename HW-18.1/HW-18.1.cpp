// аж_18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Stack
{

public:
										
	int count = 0;							//Create count for elements in stack
	int ArraySize;							//and size of array
	int* Array = new int[ArraySize];		//Create new array, which is a pointer to first array

	Stack()
	{
		cout<< "Enter size of array: ";
		cin >> ArraySize;					//Enter stack size
	}

	void push()								//Func, that push some int in stack
	{
		count++;							//Plus one step to count. Must not to exceed ArraySize
		cout << "Enter value for push: ";
		cin >> Array[count];				//Enter value for int, which will be pushed in array
		cout << Array[count] << " pushed" << endl;
	};

	void pop()								//Func, that shows last value from array and remove it
	{	
		cout << Array[count] << " removed" << endl;
		count--;							// Minus one step to count
	}
};

int main()
{
	Stack* temp = new Stack;				//Call class Stack and create pointer temp for it
	int option;								//Create new int, that will used in menu in console
	int k = 1;								//Default option for menu

	while (k == 1)
	{
		cout << "Options: 0 - Exit, 1 - push value, 2 - pop value" << endl << "Enter option: "; //Enter value for call function
		cin >> option;

		switch (option)
		{
		case 0:
			k = 0;
			break;

		case 1:
			if ((temp->ArraySize) > (temp->count))
			{
				temp->push();
			}
			else
			{
				cout << "Stack is full" << endl;
			}
			break;

		case 2:
			temp->pop();

		}
	}
}



