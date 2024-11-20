/*//printing divisible by 3
#include<iostream>
using namespace std;
int main()
{
	int n,i=1;
	cout<<"Enter n:";
	cin>>n;
	while(i<=n)
	{
		if(i%3==0)
		{
			cout<<i<<"is divisible by 3"<<endl;
		}
		else
		{
			cout<<i<<"is not divisible by 3"<<endl;
		}
		i++;
	}
	return 0;
}

//do while
#include<iostream>
using namespace std;
int main()
{
	int a=1;
	do
	{
		cout<<a<<endl;
		a++;
	}
	while(a<=10);
	return 0;
}

//printing values using do while
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter starting number:";
	cin>>a;
	cout<<"Enter Ending number:";
	cin>>b;
	do{
		cout<<a<<endl;
		a=a+2;
	}
	while(a<=b);
	return 0;
}

//odd or even numbers using do while
#include<iostream>
using namespace std;
int main()
{
	int a,b,c=0,c1=0;
	cout<<"Enter starting number:";
	cin>>a;
	cout<<"Enter ending number:";
	cin>>b;
	do
	{
		if(a%2==0)
		{
			c=c+a;
		}
		else
		{
			c1=c1+a;
		}
		a++;
	}
	while(a<=b);
	cout<<"sum of even numbers"<<c<<endl;
	cout<<"sum of odd numbers"<<c1;
	return 0;
}

//printing leap year or not leap year using do while
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter starting year:";
	cin>>a;
	cout<<"Enter Ending year:";
	cin>>b;
	do{
		if(a%4==0)
		{
			cout<<a<<"is leap year"<<endl;
		}
		else
		{
			cout<<a<<"is not a leap year"<<endl;
		}
		a++;
	}
	while(a<=b);
	return 0;
}

//Break statement
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i==5)
		{
			;
		}
		cout<<i<<endl;
	}
	return 0;
}

//Continue Statement
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i==5)
		{
			continue;
		}
		cout<<i<<endl;
	}
	return 0;
}

//printing n number of values
#include<iostream>
using namespace std;
int main()
{
	int n,i=1;
	cout<<"Enter n:";
	cin>>n;
	while(i<=n)
	{
		if(i==5)
		{
			break;
		}
		cout<<i<<endl;
		i++;
	}
	return 0;
}*/
