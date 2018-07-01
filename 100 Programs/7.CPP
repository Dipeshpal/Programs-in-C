#include<iostream.h>
#include<conio.h>
class Fibonacci
{
	public:
		int n, i;
		void getdata(void);
		void putdata(void);


};
class B : public Fibonacci
{
	public:
	int getdata()
	{
		cout<<"##Fibonacci Series Using Recursion##"<<endl;
		cout<<"Enter a number: ";
		cin>>n;
		return n;
	}
	int putdata(int n)
	{
		if((n==1)||(n==0))
		{
			return(n);
		}
		else
		{
			return(putdata(n-1)+putdata(n-2));
		}
	}
};
int main()
{
	clrscr();
	B obj;
	int i=0;
	int n = obj.getdata();
	cout<<"Fibonacci Series: ";
	while(i<n)
	{
		cout<<" "<<obj.putdata(i);
		i++;
	}
	getch();
	return 0;
}