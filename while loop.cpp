/*//while loop 
#include<iostream>
using namespace std;
int main()
{
	int a=1;
	while(a<=10)
	{
		cout<<a<<endl;
		a++;
	}
	return 0;
}

//printing n number using while loop
#include<iostream>
using namespace std;
int main()
{
	int a=1,n=10;
	while(a<=n)
	{
		cout<<a<<endl;
		a++;
	}
	return 0;
}

//printing even nummbers using while loop
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter starting number:";
	cin>>a;
	cout<<"Enter Ending number:";
	cin>>b;
	while(a<=b)
	{
		cout<<a<<endl;
		a=a+2;
	}
	return 0;
}

//printing sum of odd and even numbers using while loop
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,c1=0;
	cout<<"Enter starting number:";
	cin>>a;
	cout<<"Enter ending number:";
	cin>>b;
	while(a<=b)
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
	cout<<"sum of even numbers"<<c<<endl;
	cout<<"sum of odd numbers"<<c1;
	return 0;
}

//printing leap year or not leapyear
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter starting number:";
	cin>>a;
	cout<<"Enter ending number:";
	cin>>b;
	while(a<=b)
	{
		if(a%4==0)
		{
			cout<<a<<"is leap year"<<endl;
		}
		else
		{
			cout<<a<<"is not leap year"<<endl;
		}
		a++;
	}
	return 0;
}

//factorial of n numbers using while loop
#include<iostream>
using namespace std;
int main()
{
	int a,i=1,f=1;
	cout<<"Enter number:";
	cin>>a;
	while(i<=a)
	{
		f=f*i;
		i++;
	}
	cout<<"factorial of"<<a<<"is"<<f;
	return 0;
}

//printing prime or not
#include<iostream>
using namespace std;
int main(){
	int a,i=1,c=0;
	cout<<"Enter number:";
	cin>>a;
	while(i<=a)
	{
		if(a%i==0)
		{
			c++;
		}
		i++;
	}
	if(c<=2)
	{
		cout<<"prime";
	}
	else
	{
		cout<<"Not a prime";
	}
	return 0;
}

//star pattern 
#include<iostream>
using namespace std;
int main()
{
	int i=1,a=5;
	while(i<=a)
	{
		int j=1;
		while(j<=a)
		{
			cout<<"*";
			j++;
		}
	cout<<endl;
	i++;
	}
	return 0;
}

//star pattern
#include<iostream>
using namespace std;
int main()
{
	int i=1,a=5;
	while(i<=a)
	{
		
		int j=1;
		while(j<=i)
		{
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}

//printing star pattern
#include<iostream>
using namespace std;
int main()
{
	int i=5,a=1;
	while(i>=a)
	{
		int j=1;
		while(j<=i){
			cout<<"*";
			j++;
		}
		cout<<endl;
		i--;
		
	}
	return 0;
}

//sum of n numbers
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,i=1;
	cout<<"Enter n:";
	cin>>n;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	cout<<"sum of all numbers is"<<sum;
	return 0;
}

//printing sum of postive negative and zero
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter starting number:";
	cin>>a;
	cout<<"Enter ending number:";
	cin>>b;
	int i=a,s1=0,s2=0,s3=0;
	while(i<=b)
	{
		if(i>0)
		{
			s1++;
		}
		else if(i<0)
		{
			s2++;
		}
		else
		{
			s3++;
		}
		i++;
	}
	cout<<"sum of postive numbers"<<s1<<endl;
	cout<<"sum of negative numbers"<<s2<<endl;
	cout<<"sum of zero is"<<s3<<endl;
	return 0;
}

//printing students marks and average
#include<iostream>
using namespace std;
int main()
{
	int a,t,e,m,s,ss,sum,avg,i=1;
	cout<<"Enter the number of students:";
	cin>>a;
	while(i<=a)
	{
		cout<<"Enter number of the students Marks"<<i;
		cout<<"Tamil:\t";
		cin>>t;
		cout<<"English:\t";
		cin>>e;
		cout<<"Maths:\t";
		cin>>m;
		cout<<"Science:\t";
		cin>>s;
		cout<<"Social Science:\t";
		cin>>ss;
		sum=t+e+m+s+ss;
		avg=sum/5;
		cout<<"Total Marks"<<sum<<endl;
		cout<<"Average"<<avg<<endl;
		cout<<"------------------------------------------------"<<endl;
		i++;
	}
	return 0;
}

//printing the reverse values
#include<iostream>
using namespace std;
int main()
{
	int n,rem;
	cout<<"Enter a number:";
	cin>>n;
	int a=n,rev=0;
	while(n>0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	cout<<"The number Enter:"<<a<<endl;
	cout<<"The reverse of enter number:"<<rev<<endl;
	return 0;
}

//printing palindrome
#include<iostream>
using namespace std;
int main()
{
	int n,rem;
	cout<<"Enter a number;";
	cin>>n;
	int a=n;
	int rev=0;
	while(n>0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;	
	}
	if(a==rev)
	{
		cout<<"The given number is palindrome";
	}
	else
	{
		cout<<"The given number is not a palindrome";
	}
	return 0;
	
}

//sum of digits
#include<iostream>
using namespace std;
int main()
{
	int n,rem,sum=0;
	cout<<"Enter a number:";
	cin>>n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	cout<<"sum of digits is"<<sum;
	return 0;

}

//sum of average
#include<iostream>
using namespace std;
int main()
{
	int n,a,avg,c=0,s=0,i=1;
	cout<<"Enter n:";
	cin>>n;
	while(i<=n){
		cout<<"Enter a value:";
		cin>>a;
		s=s+a;
		c=a+a;
		avg=s/c;
		i++;
	}
	cout<<"sum is"<<s<<endl;
	cout<<"average is "<<avg;
	return 0;
}

//printing cube values
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,a;
	cout<<"Enter n:";
	cin>>n;
	int i=1;
	while(i<=n)
	{
		a=n*4;
		sum=sum+a;
		i++;
	}
	cout<<"Sum of cube values:"<<sum;
	return 0;
}

//sum of square
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,a;
	cout<<"Enter n:";
	cin>>n;
	int i=1;
	while(i<=n){
		a=i*i;
		sum=sum+a;
		i++;
	}
	cout<<"Sum of square values:"<<sum;
	return 0;
}*/

//printing fibonacii
#include<iostream>
using namespace std;
int main(){
	int n,t,i=1,n1=0,n2=1,c=0;
	cout<<"Enter n:";
	cin>>n;
	if(n<=0){
		cout<<"Enter postive number";
	}
	else if(n==1)
	{
		cout<<"Fibonacii value of"<<n<<"is"<<n1;
	}
	else{
		cout<<"fibonacii value of is"<<n;
		while(i<=n)
		{
			cout<<n1<<endl;
			t=n1+n2;
			n1=n2;
			n2=t;
			i++;
		}
	}
	return 0;
}