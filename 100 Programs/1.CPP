#include<iostream.h>
#include<conio.h>
class Reverse
{
	public:
		char str[100];
		int i, j, length;
		void getdata(void);
		void putdata(void);


};
class B : public Reverse
{
	public:
	void getdata()
	{
		cout<<"##Reverse of String##"<<endl;
		cout<<"Enter a string: ";
		cin>>str;

		int i = 0;
		while (str[i] != '\0')
		{
			i++;
		}
	       length = i;
	}
	void putdata()
	{
		int j=0;
		char temp;
		for (i=length-1; i>0; i--)
		{
			temp=str[i];
			str[i]=str[j];
			str[j]=temp;
		}
		cout<<"Reverse: "<<str;
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