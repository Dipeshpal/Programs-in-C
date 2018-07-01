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
		cout<<"##Factorial of Number Using Recursion##"<<endl;
		cout<<"Enter a number: ";
		cin>>n;
		cout<<"Factorial of "<<n<<" is: "<<putdata(n);
	}
	int putdata(int n)
	{
	     if(n > 1)
	     {
		return n * putdata(n - 1);
	     }
	     else
	     {
		return 1;
	     }
	}
};
int main()
{
	clrscr();
	B obj;
	obj.getdata();
	getch();
	return 0;
}