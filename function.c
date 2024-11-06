//sum of even numbers
#include<stdio.h>
int main()
{
	sum();
	return 0;
}
void sum()
{
	int i=2,sum=0,n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("sum of even numbers:\n");
	while(i<=n)
	{
		if(i!=n)
		{
			printf("%d+",i);
		}
		else
		{
			printf("%d=",i);
		}
		sum=sum+i
		;
		i=i+2;
	}
	printf("%d",sum);
}

//sum of odd numbers

#include<stdio.h>
int main()
{
	sum();
	return 0;
}
void sum()
{
	int i=1,sum=0,n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("sum of odd numbers:\n");
	while(i<=n)
	{
		if(i!=n)
		{
			printf("%d+",i);
		}
		else
		{
			printf("%d=",i);
		}
		sum=sum+i
		;
		i=i+2;
	}
	printf("%d",sum);
}

//printing recursion
#include<stdio.h>
int main()
{
	int n,res;
	printf("Enter a number:");
	scanf("%d",&n);
	res=sum(n);
	printf("sum= %d",res);
	return 0;
}
int sum ( a)
{
	if (a!=0)
	{
		return a+sum(a-1);
	}
	else
	{
		return a;
	}
}

//sum of factorial numbers recursion
#include<stdio.h>
int main()
{
	int x,n;
	printf("Enter a number:");
	scanf("%d",&n);
	x=fact(n);
	printf("Value %d and its factorial value is %d",n,x);
}
int fact(n)
{
	if(n>=1)
	{
		return n*fact(n-1);
	}
	else
	{
		return 1;
	}
}

//printing math function

#include<stdio.h>
#include<math.h>
int main()
{
	float n;
	printf("Enter float number:");
	scanf("%f",&n);
	int d=ceil(n);
	int g=floor(n);
	printf("ceil value is %d\n",d);
	printf("floorvalue is %d\n",g);
	return 0;
}

//power function
#include<stdio.h>
#include<math.h>
int main()
{
	int n,p;
	printf("Enter a value:");
	scanf("%d",&n);
	printf("Enter power value:");
	scanf("%d",&p);
	int x=pow(n,p);
	printf("%d power %d is %d",n,p,x);
	return 0;
}

//printing absolute value
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter a value:");
	scanf("%d",&n);
	int x=abs(n);
	printf("Values of %d is %d",n,x);
	return 0;
}

//trigonometry function
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter a value:");
	scanf("%d",&n);
	int s=sin(n);
	int c=cos(n);
	int t=tan(n);
	printf("Sin value of %d is %d \n",n,s);
	printf("cos value of %d is %d \n" ,n,c);
	printf("tan value of %d is %d \n",n,t);
	return 0;
}

//exp function
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter a value:");
	scanf("%d",&n);
	int s=exp(n);
	printf("Exp value of %d is %d",n,s);
	return 0;
}

//math function
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter a value:");
	scanf("%d",&n);
	int s=sqrt(n);
	printf("Exp value of %d is %d",n,s);
	return 0;
}
