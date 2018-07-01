#include<iostream.h>
#include<conio.h>
class Fibonacci
{
	public:
		int t1, t2, i, n, next;
		void getdata(void);
		void putdata(void);


};
class B : public Fibonacci
{
	public:
	void getdata()
	{
		cout<<"##Fabonacci Series##"<<endl;
		cout<<"Enter a number: ";
		cin>>n;
	}
	void putdata()
	{
		t1=0;
		t2=1;
		cout<<"Fibonacci Series-"<<endl;
		for (i=0; i<=n; i++)
		{
		    if(i==0)
		    {
			cout<<t1<<" ";
			continue;
		    }
		    if(i==1)
		    {
			cout<<t2<<" ";
			continue;
		    }
		    if(i<n)
		    {
			next=t1+t2;
			t1=t2;
			t2=next;
		    }
		    cout<<next<<" ";
		}

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