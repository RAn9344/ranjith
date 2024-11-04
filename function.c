/*//printing Arithmetic values using function
#include<stdio.h>
void add(int g,int h)
{
	int c;
	c=g+h;
	printf("Addition is %d\n",c);
}
void sub(int g,int h)
{
	int c1;
	c1=g-h;
	printf("Substractio is %d\n",c1);
}
void mul(int g,int h)
{
	int c2;
	c2=g*h;
	printf("Multiplication is %d\n",c2);
}
void div(int g,int h)
{
	int c3;
	c3=g/h;
	printf("Addition is %d\n",c3);
}
int main()
{
	int a,b;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
	return 0;
}

//finding interest
#include<stdio.h>
int main()
{
	int p,n,r;
	printf("Enter p:");
	scanf("%d",&p);
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter r:");
	scanf("%d",&r);
	si(p,n,r);
}
void si(int a,int b,int c)
{
	int i;
	i=(a*b*c)/100;
	printf("SI is %d",i);
}

//printing mass energy values
#include<stdio.h>
int main()
{
	int m,c;
	printf("Enter m:");
	scanf("%d",&m);
	printf("Enter c:");
	scanf("%d",&c);
	massenergy(m,c);
}
void massenergy(int a,int b)
{
	int me;
	me=a*b*b;
	printf("Mass Energy is %d",me);
}

//printing factorial
#include<stdio.h>
int main()
{
	fact();
	return 0;
}
void fact(){
	int i,n,f=1;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f=f*i;//...another method f*=i;
	}
	printf("Factorial value is %d",f);
}

//printing user defined function
#include<stdio.h>
int main()
{
	int x=2,y=3;
	add(x,y);
	return 0;
}
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("Sum is %d",c);
}

//printing sum of numbers
#include<stdio.h>
int main()
{
	int sum=add();
	printf("Sum is %d",add());
	return 0;
}
int add()
{
	int a=2,b=3;
	int c;
	c=a+b;
	return c;
}

//printing add numbers
#include<stdio.h>
int main()
{
	int x=2,y=3;
	add(x,y);
	printf("Sum is %d",add(x,y ));
	return 0;
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}

//printing user defined function
#include<stdio.h>
int main()
{
	add();
	return 0;
}
int add()
{
	int c;
	int a=2,b=3;
	c=a+b;
	printf("Sum is %d",c);
	return 0;
}

//sum of values
#include<stdio.h>
int main()
{
	int a,b;
	a=5;
	b=2;
	add(a,b);
	return 0;
}
void add(int x,int y)
{
	 int z=x+y;
	printf("Sum is %d",z);
}

//printing parameters
#include<stdio.h>
int main()
{
	int a,b;
	a=5;
	b=2;
	add(&a,&b);
	return 0;
}
void add(int *x,int *y)
{
	 int z=*x+*y;
	printf("Sum is %d",z);
}*/

//printing sum of series
#include<stdio.h>
int main()
{
	sum();
	return 0;
}
void sum()
{
	int i,sum=0,n;
	printf("Enter n:");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	printf("sum of series:");
	for(i=1;i<=n;i++)
	{
		if(i!=n)
		{
			printf("%d+",i);
		}
		else
		{
			printf("%d=%d",i,sum);
		}
	}
}