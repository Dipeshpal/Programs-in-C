#include<iostream.h>
#include<conio.h>
#include<process.h>
#define maxsize 5
int top = -1;
int stack[maxsize];
void push();
void pop();
void display();
int options();
void main()
{
	clrscr();
	options();
	getch();
}
int options()
{
	while(1)
	{
	int opt;
	cout<<endl;
	cout<<"##### STACK MENU #####"<<endl;
	cout<<"Press 1 for Insert data"<<endl;
	cout<<"Press 2 for Delete data"<<endl;
	cout<<"press 3 for Display data"<<endl;
	cout<<"Press 4 for exit"<<endl;
	cin>>opt;

	switch(opt)
	{
		case 1: push();
			break;
		case 2: pop();
			break;
		case 3: display();
			break;
		case 4: exit(0);
			default: cout<<"Wrong choice"<<endl;
	}
	}
}
void push()
{
	int no, i, item;
	cout<<"-----INSERTION-----"<<endl;
	if(top == maxsize-1)
	{
		cout<<"Stack is Full (Overflow)"<<endl;
		display();
	}
	else
	{
	       for(i=top+1; i<maxsize; i++)
	       {
		cout<<"Enter "<<i+1<<" element: ";
		cin>>item;
		top = top+1;
		stack[top] = item;
	       }
	       display();
	}
}
void pop()
{
	cout<<"-----DELETION-----"<<endl;
	if(top == -1)
	{
		cout<<"Stack is Empty (Underflow) "<<endl;
		display();
	}
	else
	{
		cout<<"Deleted element is: "<<stack[top]<<endl;
		top = top-1;
		display();
	}
}
void display()
{
	//int i,j,n;
	//n = maxsize;
	int j;
	cout<<"-----DISPLAY DATA-----"<<endl;
	if(top == -1)
	{
		cout<<"Stack is Empty"<<endl;
	}
	else
	{
		for(j=0; j<=top; j++)
		cout<<"Element at position "<<j+1<<" is: "<<stack[j]<<endl;
	}
}