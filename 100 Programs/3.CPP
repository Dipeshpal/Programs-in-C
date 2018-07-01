#include<iostream.h>
#include<conio.h>
class Reverse
{
	public:
	int n, reverseNo, reminder;
	void getdata()
	{
		cout<<"Enter a number to be reverse: ";
		cin>>n;
	}
	void putdata()
	{
		while(n!=0)
		{
			reminder = n%10;
			reverseNo = reverseNo*10 + reminder;
			n = n / 10;
		}
		cout<<"Reversed Number is: "<<reverseNo;
	}
};
int main()
	{
		clrscr();
		Reverse obj;
		obj.getdata();
		obj.putdata();
		getch();
		return 0;
	}