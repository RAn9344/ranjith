//printing if statement
#include<iostream>
using namespace std;
int main()
{
	int a=20;
	if(a>18)
	{
		cout<<a<<"is greaterthen 18";
	
	}
	return 0;
}

//printing if else statement
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter a value:";
	cin>>a;
	cout<<"Enter b value:";
	cin>>b;
	if(a>b)
	{
		cout<<a<< "is greater then"<<b;
	}
	else
	{
		cout<<b<<" is greater then"<<b;
	}
	return 0;
}

//printing if else statement
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a value:";
	cin>>a;
	if(a>0)
	{
		cout<<a<<"is postive number:";
	}
	else if(a<0)
	{
		cout<<a<<"is negative number";
	}
	else
	{
		cout<<"number is zero";
	}
	return 0;
}

//odd or even numbers
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a value:";
	cin>>a;
	if(a%2==0)
	{
		cout<<a<<" is even number";
	}
	else
	{
		cout<<a<<" is odd number";
		
	}
	return 0;
}

//leap year or not leap year
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a year:";
	cin>>a;
	if(!(a%4==0))
	{
		cout<<a<<" is not leap year";
		
	}
	else
	{
		cout<<a<<" is leap year";
	}
	return 0;
}

//biggest values with using logical operator
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter a value:";
	cin>>a;
	cout<<"Enter b value:";
	cin>>b;
	cout<<"Enter c value:";
	cin>>c;
	if(a>b&&a>c)
	{
		cout<<a<<" a is the biggest number";
	}
	else if(b>a&&b>c)
	{
		cout<<b<<" b is the biggest number";
	}
	else
	{
		cout<<c<<" c is the biggest number";
	}
	return 0;
}

//biggest values nested if
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter a value:";
	cin>>a;
	cout<<"Enter b value:";
	cin>>b;
	cout<<"Enter c value:";
	cin>>c;
	if(a>b){
		if(a>c)
		{
			cout<<a<<" a is the biggest number";
		}
		else{
			cout<<c<<" c is the biggest number";
		}
	}
	if(b>a)
	{
		if(b>c)
		{
			cout<<b<<" b is the biggest number";
		}
		else
		{
			cout<<c<<" c is the biggest number";
		}
	}
}

//Finding arithmetic values
#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"Enter a symbol:";
	cin>>a;
	if(a=='+' || a=='-' || a=='*' || a=='/' || a=='%')
	{
		cout<<a<<"is arithmetic operator";
	}
	else
	{
		cout<<a<<"is special character";
	}
	return 0;
}

//vowels or not
#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"Enter a symbol:";
	cin>>a;
	if(a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O')
	{
		cout<<a<<"is vowel";
	}
	else
	{
		cout<<a<<"is consonant";
	}
	return 0;
}

//Ternary operator
#include<iostream>
using namespace std;
int main()
{
	int a=15;
	a>10 ? cout<<" a is biggest number" : cout<<"a is smallest number";
	return 0;
}

//biggest values using ternary operator
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter a value:";
	cin>>a;
	cout<<"Enter b value:";
	cin>>b;
	cout<<"Enter c value:";
	cin>>c;
	a>b ? a>c ? cout<<"a is big" : cout<<"c is big" : b>c? cout<<"b is big" : cout<<"c is big";
	return 0;
}

//odd or even
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a value:";
	cin>>a;
	a%2==0? cout<<"Even" : cout<<"odd";
	return 0;
}

//lowercase and uppercase
#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"Enter a value:";
	cin>>a;
	a>=97 && a<=122? cout<<"lower" : a>=65 && a<=90? cout<<"upper" : cout<<"its not a alphabet";
}

//square values
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter a length:";
	cin>>a;
	cout<<"Enter a breadth:";
	cin>>b;
	a==b? cout<<"it is square" : cout<<"it is not a square";
}

//finding bonus values
#include<iostream>
using namespace std;
int main()
{
	int s,exp;
	cout<<"Enter salary:";
	cin>>s;
	cout<<"Enter years of experience:";
	cin>>exp;
	if(exp>5)
	{
		s*=0.05;
		cout<<s<<"Bonus is";
	}
	else
	{
		cout<<"No bonus";
	}
}

//attendance percentage
#include<iostream>
using namespace std;
int main()
{
	int c,a;
	cout<<"Enter total number of classes:";
	cin>>c;
	cout<<"Enter number of classes attended:";
	cin>>a;
	int attendance=a*100/c;
	if(attendance>=75)
	{
		cout<<"Eligible";
	}
	else
	{
		cout<<"not eligible";
	}
}

//profit or loss
#include<iostream>
using namespace std;
int main()
{
	int ap,sp,diff;
	cout<<"Actual price of product:";
	cin>>ap;
	cout<<"sales price of prodect:";
	cin>>sp;
	if(ap>sp)
	{
		diff=ap-sp;
		cout<<diff<<"is loss";
	}
	else
	{
		diff=sp-ap;
		cout<<diff<<"is profit";
	}
}

//student grades
#include<iostream>
using namespace std;
int main()
{
	float a;
	char c;
	cout<<"Enter your marks:";
	cin>>a;
	if(a<25)
	{
		c='F';
	}
	else if ((a>=25) && (a<45))
	{
		c='E';
	}
	else if ((a>=45) && (a<60))
	{
		c='D';
	}
	else if ((a>=60) && (a<75))
	{
		c='C';
	}
	else if ((a>=75) && (a<80))
	{
		c='B';
	}
	else
	{
		c='A';
	}
	cout<<c<<"your grade is ";
	return 0;
}

//switch case
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a number:";
	cin>>a;
	switch (a)
	{
		case 1:
			cout<<"Monday";
			break;
		case 2:
			cout<<"Tuesday";
			break;
		case 3:
			cout<<"Wednesday";
			break;
		case 4:
			cout<<"Thursday";
			break;
		case 5:
			cout<<"Friday";
			break;
		case 6:
			cout<<"Saturday";
			break;
		case 7:
			cout<<"Sunday";
			break;
	}
	return 0;
}



	