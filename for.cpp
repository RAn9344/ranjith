//for loop
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

//printing values one by one using for loop
#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=0;i<10;i++)
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

//printing even numbers with using for loop
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the last teram:";
	cin>>b;
	cout<<"even numbers:"<<endl;
	for(a=2;a<=b;a=a+2)
	{
		cout<<a<<endl;
	}
	return 0;
}

//printing leap year 
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
	return 0;
}

//printing odd values
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the last term:";
	cin>>b;
	cout<<"odd numbers:"<<endl;
	for(a=1;a<=b;a=a+2)
	{
		cout<<a<<endl;
	}
	return 0;
}

//sum of values
#include<iostream>
using namespace std;
int main()
{
	int a,b,i,s=0;
	cout<<"Enter the first term:";
	cin>>a;
	cout<<"Enter last term:";
	cin>>b;
	for(i=a;i<=b;i++)
	{
		s+=i;
	}
	cout<<"sum of all numbers"<<s;
	return 0;
}

//printing sum of add number and even numbers
#include<iostream>
using namespace std;
int main()
{
	int a,b,i,s=0,s1=0;
	cout<<"Enter the first term:";
	cin>>a;
	cout<<"Enter the last term:";
	cin>>b;
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			s+=i;
		}
		else
		{
			s1+=i;
		}
	}
	cout<<"sum of all even numbers"<<s<<endl;
	cout<<"sum of all odd numbers"<<s1;
	return 0;
}

//sum of square values
#include<iostream>
using namespace std;
int main()
{
	int a,n,i,d,s=0;
	cout<<"Enter first term:";
	cin>>a;
	cout<<"Enter last term:";
	cin>>n;
	for(i=a;i<=n;i++)
	{
		d=i*i;
		s+=d;
	}
	cout<<"sum of square values"<<s;
	return 0;
	
}

//leap year or not leap year
#include<iostream>
using namespace std;
int main()
{
	int a,n,i,d;
	cout<<"Enter starting year:";
	cin>>a;
	cout<<"Enter ending year:";
	cin>>n;
	for(i=a;i<=n;i++)
	{
		if(i%4==0)
		{
			cout<<i<<"is leap year"<<endl;
		}
		else
		{
			cout<<i<<"not leap year"<<endl;
		}
	}
	return 0;
}

//printing factorial n numbers
#include<iostream>
using namespace std;
int main()
{
	int a,f=1;
	cout<<"Enter a number:";
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		f=f*i;
	}
	cout<<"factorial of"<<a<<"is"<<f;
	return 0;
}

//prime number or not a prime number
#include<iostream>
using namespace std;
int main()
{
	int a,c=0;
	cout<<"Enter a number:";
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		if (a%i==0)
		{
			c++;
		}
	}
	if (c<=2)
	{
		cout<<a<<"prime number";
	}
	else
	{
		cout<<a<<"not a prime number";
	}
	return 0;
}

//printing star pattern
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a number:";
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=a;j++)
		{
			cout<<"*\t";
		}
		cout<<endl;
	}
	return 0;
}

//printing star pattern
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a number:";
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

//printing star pattern
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a number:";
	cin>>a;
	for(int i=a;i>=1;i--)
	{
		for(int j=i;j>=1;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}





