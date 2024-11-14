/*//for loop
#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i<=10;i++)
	{
		cout<<i<<endl;
	}
	return 0;
}

//printing numbers
#include<iostream>
using namespace std;
int main()
{
	int i,a=5;
	for(i=0;i<=a;i++)
	{
		cout<<i<<endl;
	}
	return 0;
}

//printing starting ending value
#include<iostream>
using namespace std;
int main()
{
	int i,a,b;
	cout<<"Enter starting number:";
	cin>>a;
	cout<<"Enter ending number:";
	cin>>b;
	for(i=a;i<=b;i++)
	{
		cout<<i<<endl;
	}
	return 0;
}

//printing reverse order
#include<iostream>
using namespace std;
int main()
{
	int i,a,b;
	cout<<"Enter starting number:";
	cin>>a;
	cout<<"Enter ending number:";
	cin>>b;
	for(i=b;i>=a;i--)
	{
		cout<<i<<endl;
	}
	return 0;
}

//even numbers with using for loop
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter last term:";
	cin>>b;
	cout<<"Even numbers:"<<endl;
	for(a=2;a<=b;a=a+2)
	{
		cout<<a<<endl;
	}
	return 0;
}*/

//leap year with using for loop
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the last year:";
	cin>>b;
	cout<<"leap years:"<<endl;
	for(a=2000;a<=b;a=a+4)
	{
		cout<<a<<endl;
	}
}