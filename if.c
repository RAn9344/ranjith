//printing if statement
#include<stdio.h>
int main()
{
	int a=20;
	if(a>18)
	{
		printf("%d is greater than 18",a);
	}
	return 0;
}

//printing if else statement
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a value:");
	scanf("%d",&a);
	printf("Enter b value:");
	scanf("%d",&b);
	if(a>b)
	{
		printf("%d is greater than %d",a,b);
	}
	else
	{
		printf("%d is greater than %d",b,a);
	}
	return 0;
}

//printing if else if else statement
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a Value:");
	scanf("%d",&a);
	if (a>0)
	{
		printf("%d is postivie number",a);
	}
	else if (a<0)
	{
		printf("%d is negative number",a);
	}
	else
	{
		printf("Given number is zero");
	}
	return 0;
}

//Finding odd or even numbers
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a value:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is even number",a);
	}
	else
	{
		printf("%d is odd number",a);
	}
	return 0;		
}

//leap year or not leap year
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a Year:");
	scanf("%d",&a);
	if (!(a%4)==0)
	{
		printf("%d is not leap year",a);
	}
	else
	{
		printf("%d is leap year",a);
	}
	return 0;
}

//finding the biggest values with using logical operator
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter  a value:");
	scanf("%d",&a);
	printf("Enter b value:");
	scanf("%d",&b);
	printf("Enter c value:");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("a is the biggest number");
	}
	else if(b>a&&b>c)
	{
		printf("b is the biggest number");
	}
	else
	{
		printf("c is biggest number");
	}
	return 0;
}

