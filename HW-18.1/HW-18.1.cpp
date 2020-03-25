// аж_18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Stack
{
private:

	int* DinamicArray = new int[n];
	int n;	
	int b;
	int i;
	int* c = &i;
	

public:

	void EnterSize() // Enter size of stack
	{
		cout << "Please enter size of Array: ";
		cin >> n;
	}

	void push() //Pushing variables into stack
	{
		for (int i = 0; i < n; i++)
		{
			cout << "Push value: ";
			cin >> DinamicArray[i];
		}
	}

	void OutputStack() 
	{
		cout << "Your Array: ";

		for (int b = 0; b < n; b++)
		{
			int* t = &b;
			cout << DinamicArray[*t] << " ";
		}

		cout  << "\n"<< "Pop: ";	
	}

	/*void pop() //Capture and delete top element of stack
	{
		for (int i = n - 1; i < n; i++)
		{
			int* d = &DinamicArray[i];
			cout << *d;
			delete[] d;
		}
		
	}*/
};

int main()
{
	Stack temp;
	temp.EnterSize();
	temp.push();
	temp.OutputStack();
	/*temp.pop();*/
	

	/*int a = 5;
	int *b=&a;
	cout << *b;*/
	
	
}


