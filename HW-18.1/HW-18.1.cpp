// аж_18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Stack
{
private:

	int value;

public:

	int count = 0;
	int ArraySize;
	int* Array = new int[ArraySize];

	Stack()
	{
		cout<< "Enter size of array: ";
		cin >> ArraySize;
	}

	void push()
	{
		count++;
		cout << "Enter value for push: ";
		cin >> Array[count];
		cout << Array[count] << " pushed" << endl;
	};

	void pop()
	{	
		cout << Array[count] << " removed" << endl;
		count--;
	}
};

int main()
{
	Stack* temp = new Stack;	
	int option;
	int k = 1;

	while (k == 1)
	{
		cout << "Options: 0 - Exit, 1 - push value, 2 - pop value" << endl<< "Enter option: ";
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
				cout << "Stack is full"<<endl;
			}
			break;
		
		case 2:
			temp->pop();
		
	}
	
}


