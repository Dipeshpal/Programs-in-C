#include<iostream.h>
#include<conio.h>
class Factorial
{
	public:
		int n, i, fact;
		void getdata(void);
		void putdata(void);


};
class B : public Factorial
{
	public:
	void getdata()
	{
		cout<<"##Factorial of Number##"<<endl;
		cout<<"Enter a number: ";
		cin>>n;
	}
	void putdata()
	{
		for(i=n; i>0; i--)
		{
			fact=fact*i;
		}
		cout<<"Factorial of "<<num<<" is "<<fact;
	}

};
int main()
{
	clrscr();
	B obj;
	obj.getdata();
	obj.putdata();
	getch();
	return 0;
}