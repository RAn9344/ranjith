//printing function
#include<iostream>
using namespace std;
void simple()
{
	cout<<"Systech - C programming Language";
}
int main()
{
	simple();
	return 0;
}

//function declaration
#include<iostream>
using namespace std;
void simple();
int main()
{
	simple();
	return 0;
}
void simple()
{
	cout<<"C-programming language";
}

//printing Multiple Function
#include<iostream>
using namespace std;
void simple()
{
	cout<<"C-programming language"<<endl;
}
int main()
{
	simple();
	simple();
	simple();
	simple();
	simple();
	simple();
}

//printing multiple values using function with for loop
#include<iostream>
using namespace std;
void simple()
{
	cout<<"C-programming language"<<endl;
}
int main()
{
	for(int i=1;i<=5;i++)
	{
		simple();
	}
	return 0;
}

//printing string
#include<iostream>
using namespace std;
void simple(char a[])
{
	cout<<"systech -"<<a<<endl;
}
int main()
{
	simple("C programming language");
	return 0;
}

//printing two digits using function
#include<iostream>
using namespace std;
void add(int g,int h)
{
	int c;
	c=g+h;
	cout<<"sum is"<<c;
}
int main()
{
	add(2,4);
	return 0;
}

//printing sum of values
#include<iostream>
using namespace std;
int add(int g,int h)
{
	int c;
	c=g+h;
	return c;
}
int main()
{
	int sum=add(2,4);
	cout<<"sum is "<<sum;
	return 0;
}

//adding two numbers using functions
#include<iostream>
using namespace std;
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int main()
{
	int a,b;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	int sum=add(a,b);
	cout<<"sum is"<<sum;
}

//printing multiple values
#include<iostream>
using namespace std;
void add(int g,int h)
{
	int c;
	c=g+h;
	cout<<"sum is"<<c<<endl;
}
int main()
{
	add(2,7);
	add(4,8);
	add(9,2);
}