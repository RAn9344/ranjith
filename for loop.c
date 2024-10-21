//printing sum of values
 #include<stdio.h>
 int main()
 {
 	int a,b,i;
 	int s=0;
 	printf("Enter the first term:");
 	scanf("%d",&a);
 	printf("Enter the last term:");
 	scanf("%d",&b);
 	for(i=a;i<=b;i++)
 	{
 		s+=i;
	 }
	 printf("Sum of all numbers %d",s);
	 return 0;
 }
 
 //printing sum of odd number and even numbers
 #include<stdio.h>
 int main()
 {
 	int a,b,i;
 	int s=0,s1=0;
 	printf("Enter the first term:");
 	scanf("%d",&a);
 	printf("Enter the last term:");
 	scanf("%d",&b);
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
	 printf("sum of all even numbers %d\n",s);
	 printf("sum of all odd numbers %d",s1);
	 return 0;
 }
 
 //sum of square values
 #include<stdio.h>
 int main()
 {
 	int a,n,i,d;
 	int s=0;
 	printf("Enter first term:");
 	scanf("%d",&a);
 	printf("Enter last term:");
 	scanf("%d",&n);
 	for(i=a;i<=n;i++)
 	{
 		d=i*i;
 		s+=d;
	 }
	 printf("sum of square values %d",s);
	 return 0;
 }
 
 //printing leap year not leap year
 
 #include<stdio.h>
 int main()
 {
 	int a,n,i,d;
 	int s=0;
 	printf("Enter first term:");
 	scanf("%d",&a);
 	printf("Enter last term:");
 	scanf("%d",&n);
 	for(i=a;i<=n;i++)
 	{
 		if(i%4==0)
 		{
 			printf("%d is leap year\n",i);
		 }
		 else
		 {
		 	printf("%d is not a leap year\n",i);
		 }
	 }
	 return 0;
}

//printing factorial of n numbers
#include<stdio.h>
int main()
{
	int i,a,f=1;
	printf("Enter a number:");
	scanf("%d",&a);
	for( 
	
	  i=1;i<=a;i++)
	{
		f=f*i;
	}
	printf("factorial of %d is %d",a,f);
	return 0;
}

//printing prime number not prime number
#include<stdio.h>
int main()
{
	int a,c=0;
	printf("Enter a number:");
	scanf("%d",&a);
	for(int i=i;i<=a;i++)
	{
		if(a%i==0)
		{
			c++;
		}
	}
	if(c<=2)
	{
		printf("%d is prime number",a);
	}
	else
	{
		printf("%d is not a primt number",a);
	}
	return 0;
}

//printing star pattern
#include<stdio.h>
int main()
{
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	for (int i=0;i<=a;i++)
	{
		for(int j=1;j<=a;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	return 0;
} 

#include<stdio.h>
int main()
{
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	for (int i=1;i<=a;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	return 0;
}*/

#include<stdio.h>
int main()
{
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	for (int i=a;i>=1;i--)
	{
		for(int j=i;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

 