//printing student marks and average
#include<stdio.h>
int main()
{
	int a,t,e,m,s,ss,sum,avg;
	int i=1;
	printf("Enter number of students:");
	scanf("%d",&a);
	while(i<=a)
	{
		printf("Enter number %d students marks:\n",i);
		printf("Tamil:\t");
		scanf("%d",&t);
		printf("English:\e");
		scanf("%d",&e);
		printf("maths:\m");
		scanf("%d",&m);
		printf("science:\s");
		scanf("%d",&s);
		printf("socialscience:\ss");
		scanf("%d",&ss);
		sum=t+e+m+s+ss;
		avg=sum/5;
		printf("Total Marks %d\n",sum);
		printf("Average %d\n",avg);
		printf("--------------------------------------\n");
		i++;
		
	}
	return 0;
}*/

/*//printing the reverse values
#include<stdio.h>
int main()
{
	int n,rem;
	printf("Enter a number:");
	scanf("%d",&n);
	int a=n;
	int rev=0;
	while(n>0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	printf("The number Enter:%d\n",a);
	printf("The reverse of enter number:%d\n",re);
	return 0;
	
}

//printing palindrome
#include<stdio.h>
int main()
{
	int n,rem;
	printf("Enter a number:");
	scanf("%d",&n);
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
		printf("The given number is palindrome");
	}
	else
	{
		printf("The given number is not palindrome");
	}
	return 0;
}

//printing sum of digits
#include<stdio.h>
int main()
{
	int n,rem,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("Sum of digits is %d",sum);
	return 0;
}

//sum of average
#include<stdio.h>
int main()
{
	int n,a,avg;
	int c=0,s=0,i=1;
	printf("Enter n:");
	scanf("%d",&n);
	while(i<=n){
		printf("Enter a value:");
		scanf("%d",&a);
		s=s+a;
		c=a+a;
		avg=s/c;
		i++;
	}
	printf("sum is %d\n",s);
	printf("Average is %d\n",avg);
	return 0;
}

//printing cube values
#include<stdio.h>
int main()
{
	int n,sum=0;
	int a;
	printf("Enter n:");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		a=i*i*i;
		sum=sum+a;
		i++;
	}
	printf("values: %d",sum);
	return 0;
}

//printing square values
#include<stdio.h>
int main()
{
	int n,sum=0;
	int a;
	printf("Enter n:");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		a=i*i;
		sum=sum+a;
		i++;
	}
	printf("values: %d",sum);
	return 0;
}

//fibonacii series

#include<stdio.h>
int main()
{
	int n,t;
	int i=1;
	int n1=0,n2=1;
	int c=0;
	printf("Enter n:");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("Enter postive number");
	}
	else if(n==1)
	{
		printf("fibonacii value of %d is %d",n,n1);
	}
	else{
		printf("Fibonacii value of %d is\n",n);
		while(i<=n)
		{
			printf("%d\n",n1);
			t=n1+n2;
			n1=n2;
			n2=t;
			i++;
		}
	}
	return 0;
}

//divisible by 3

#include<stdio.h>
int main()
{
	int n;
	int i=1;
	printf("Enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%3==0)
		{
			printf("%d is divisible by 3\n",i);
		}
		else
		{
			printf("%d is not divisible by 3\n",i);
		}
		i++;
	}
	return 0;
}

//do while

#include<stdio.h>
int main()
{
	int a=1;
	do
	{
		printf("%d\n",a);
		a++;
	}
	while(a<=10);
	return 0;
}

//printing values using do while
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter starting number:");
	scanf("%d",&a);
	printf("Enter ending number:");
	scanf("%d",&b);
	do
	{
		printf("%d\n",a);
		a=a+2;
	}
	while(a<=b);
	return 0;
}

//odd or even number using do while
#include<stdio.h>
int main()
{
	int a,b,c=0,c1=0;
	printf("Enter starting number:");
	scanf("%d",&a);
	printf("Enter ending number:");
	scanf("%d",&b);
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
	printf("even numbers %d\n",c);
	printf("odd numbers %d\n",c1);
	return 0;
}

//leap year or not leap year using do while
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter starting year:");
	scanf("%d",&a);
	printf("Enter ending year:");
	scanf("%d",&b);
	do
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
	while(a<=b);
	return 0;
}

//Break Statement

#include<stdio.h>
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i==5)
		{
			break;
		}
		printf("%d\n",i);
	}
	return 0;
}