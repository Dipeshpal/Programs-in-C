#include<iostream.h>
#include<conio.h>
class Palindrome
{
	public:
		char str[100];
		int i, first, last, flag;
		void getdata(void);
		void putdata(void);


};
class B : public Palindrome
{
	public:
	void getdata()
	{
		cout<<"##Palindrome of String##"<<endl;
		cout<<"Enter a string: ";
		cin>>str;

		int i = 0;
		while (str[i] != '\0')
		{
			i++;
		}
	       last = i-1;
	}
	int putdata()
	{
		first=0;
		last;
		flag = 0;
		while(last>first)
		{
			if(str[last] != str[first])
			{
				flag = 1;
				break;
			}
			else
			{
				flag = 0;
			}
			last--;
			first++;
		}
		return flag;
	}
	void result(int f)
	{
		if (f==0)
		{
			 cout<<"Palindrome";
		}
		else
		{
			cout<<"Not a palindrome";
		}

	}

};
int main()
{
	clrscr();
	B obj;
	int result;
	obj.getdata();
	result = obj.putdata();
	obj.result(result);
	getch();
	return 0;
}