/*//printing number using while loop
#include<stdio.h>
int main()
{
	int a=1;
	while (a<=10)
	{
		printf("%d\n",a);
		a++;
	}
	return 0;
}

//printing n numbers using while loop
#include<stdio.h>
int main()
{
	int a=0;
	int n=10;
	while(a<=n)
	{
		printf("%d\n",a);
		a++;
	}
	return 0;
}

//printing even numbers using while loop
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter starting number:");
	scanf("%d",&a);
	printf("Enter Ending number:");
	scanf("%d",&b);
	while(a<b)
	{
		printf("%d\n",a);
		a=a+2;
	}
	return 0;
}

//printing sum of odd and even numbers using while loop
#include<stdio.h>
int main()
{
	int a,b,c=0,c1=0;
	printf("Enter Starting number:");
	scanf("%d",&a);
	printf("Enter Ending number:");
	scanf("%d",&b);
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
	printf("sum of even numbers %d\n",c);
	printf("sum of odd numbers %d",c1);
	return 0;
}

// printing leap year not leap year using while loop
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter starting year:");
	scanf("%d",&a);
	printf("Enter Ending year:");
	scanf("%d",&b);
	while(a<=b)
	{
		if(a%4==0)
		{
			printf("%d is leap year\n",a);
		}
		else
		{
			printf("%d is not leap year\n",a);
		}
		a++;
	}
	return 0;
}

//factorial n numbers using while loop
#include<stdio.h>
int main()
{
	int a;
	int i=1;
	int f=1;
	printf("Enter number:");
	scanf("%d",&a);
	while(i<=a)
	{
		f=f*i;
		i++;
	}
	printf("Factorial of %d is %d ",a,f);
	return 0;
}

//printing prime or not
#include<stdio.h>
int main()
{
	int a;
	int i=1;
	int c=0;
	printf("Enter number:");
	scanf("%d",&a);
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
		printf("prime");
	}
	else
	{
		printf("not a prime");
	}
	return 0;
}

//printing star pattern using while loop
#include<stdio.h>
int main()
{
	int i=1;
	int a=5;
	while(i<=a)
	{
		int j=1;
		while(j<=a)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}

//printing star pattern using while loop
#include<stdio.h>
int main()
{
	int i=1;
	int a=5;
	while(i<=a)
	{
		int j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}

//star pattern

#include<stdio.h>
int main()
{
	int i=5;
	int a=1;
	while(a<=i)
	{
		int j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i--;
	}
	return 0;
}

//sum of n numbers
#include<stdio.h>
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	int sum=0;
	int i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("sum of all numbers is %d ",sum);
	return 0;
}*/

//printing sum of positive negative and zero values
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter starting number:");
	scanf("%d",&a);
	printf("Enter ending number:");
	scanf("%d",&b);
	int s1=0,s2=0,s3=0;
	int i=a;
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
	printf("sum of positive number is %d\n",s1);
	printf("sum of negative number is %d\n",s2);
	printf("sum of zero is %d\n",s3);
	return 0;
	
}