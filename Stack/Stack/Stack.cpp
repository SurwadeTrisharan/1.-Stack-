#include<iostream>
using namespace std;
#define MAX 5
int stack[MAX];
int top = -1;
int item;

void push(int item)
{
	if (top == MAX - 1)
	{
		cout << "The stack is full"<<endl;
		return ;
	}
	top = top +1;
	stack[top] = item;
	return;
}

int pop()
{
	if (top == -1)
	{
		cout << "The stack is empty" << endl;
		return -1;
	}
	item = stack[top];
	top = top - 1;
	return item;
}

int peek()
{
	if (top == -1)
	{
		cout << "The stack is empty" << endl;
		return -1;
	}
	item = stack[top];
	return item;
}

void display()
{
	int i=top;
	if (top == -1)
	{
		cout << "Stack is empty" << endl;
		return;
	}
	cout << "Element of stack"<<endl;
	for (i = top; i >= 0; i--)
	cout << stack[i]<<endl;
		cout << " \n";
}

int main()
{
	int choice, value;
	do
	{
		cout << "\nEnter 1.Push 2.Pop 3.peek 4.Display 5.Exit" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:cout << "Enter enter the value to push" << endl;
			cin >> value;
			push(value);
			break;
		case 2:value = pop();
			cout << "The value poped is" <<value<< endl;
			break;
		case 3:value = peek();
			cout << "The value peeked is" << value<<endl;
			break;
		case 4:display();
			break;
		default:cout << "Exiting"<<endl;
			choice = 5;
		}
	} while (choice != 5);
}