//for loop
 #include<stdio.h>
 int main()
 {
 	for (int i=0;i<=10;i++)
 	{
 		printf("%d\n",i);
	 }
	 return 0;
 }
 
 //printing values one by one using for loop
 
 #include<stdio.h>
int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d\n",i);
	}
	return 0;
}

//printing numbers
#include<stdio.h>
int main()
{
	int i;
	int a=5;
	for(i=0;i<=a;i++)
	{
		printf("%d\n",i);
	}
	return 0;
}

//printing starting ending value
#include<stdio.h>
int main()
{
	int i,a,b;
	printf("Enter Starting number:");
	scanf("%d",&a);
	printf("Enter Ending number:");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		printf("%d\n",i);
	}
	return 0;
}

//printing reverse order
#include<stdio.h>
int main()
{
	int i,a,b;
	printf("Enter Starting number:");
	scanf("%d",&a);
	printf("Enter Ending number:");
	scanf("%d",&b);
	for(i=b;i>=a;i--)
	{
		printf("%d\n",i);
	}
	return 0;
}

//printing even numbers with using for loop
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the last term:");
	scanf("%d",&b);
	printf("Even numbers:\n");
	for(a=2;a<=b;a=a+2)
	{
		printf("%d\n",a);
	}
	return 0;
}

//printing leap year with using for loop
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the last year:");
	scanf("%d",&b);
	printf("Leap years :\n");
	for(a=2000;a<=b;a=a+4)
	{
		printf("%d\n",a);
	}
	return 0;
}

//printing odd values
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the last term:");
	scanf("%d",&b);
	printf("odd numbers:\n");
	for(a=1;a<b;a=a+2)
	{
		printf("%d\n",a);
	}
	return 0;
}

