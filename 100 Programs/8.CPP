#include<iostream.h>
#include<conio.h>
class Hcf
{
	public:
	int a, b, n;
	int getdata()
	{
		cout<<"Enter 1st Number:";
		cin>>a;
		cout<<"Enter 2nd Number:";
		cin>>b;
		return (a,b);
	}
	int putdata(int a, int b)
	{
		while(n!=0)
		{
			n=a%b;
			a=b;
			b=n;
			putdata(a,b);
		}
		return b;

	}
};

int main()
{
	clrscr();
	Hcf obj;
	int x,y,z;
	x,y = obj.getdata();
	cout<<"HCF: "<<obj.putdata(x,y);
	getch();
	return 0;
}