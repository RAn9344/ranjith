/*//printing pointer
#include<stdio.h>
int main()
{
	int n=5;
	int ptr=&n;
	int *pointer=&n; 
	printf("%d\n",n);
	printf("%p\n",ptr);
	printf("%d\n",*pointer);
	return 0;
}

//printing pointer
#include<stdio.h>
int main()
{
	int n=5;
	int *pointer=&n;
	printf("%d\n",n);
	printf("%p\n",pointer);
	printf("%d\n",*pointer);
	return 0;
}

//swapping values
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	int *p1=&a,*p2=&b;
	printf("Before swap: *p1=%d *p2=%d",*p1,*p2);
	*p1=*p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
	printf("\nAfter swap: *p1=%d *p2=%d",*p1,*p2);
	return 0;
}

//printing value in array
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int i,*ptr[5];
	for(i=0;i<5;i++)
	{
		ptr[i]=&a[i];
	}
	for(i=0;i<5;i++)
	{
		printf("value of a[%d] = %d\n",i,*ptr[i]);
		
	}
	return 0;
}

//printing pointer
#include<stdio.h>
int main()
{
	char n='A';
	char *pointer=&n;
	printf("%c\n",n);
	printf("%p\n",pointer);
	printf("%c\n",*pointer);
	return 0;
}

//array using for loop
#include<stdio.h>
int main()
{
	char *names[]={
	"SYSTECH","C","PROGRAMMING","LANGUAGE"};
	int i=0;
	for(i=0;i<4;i++)
	{
		printf("names[%d] = %s\n",i,names[i]);
	}
	return 0;
}

//pointer to pointer

#include<stdio.h>
int main()
{
	int x=10,*p,**pp;
	p=&x;
	pp=&p;
	printf("x value through pointer p=%d\n",*p);
	printf("x value through pointer pp=%p\n",*pp);
	return 0;
}

//function pointer
#include<stdio.h>
int add(int ,int);
int main()
{
	int a,b;
	int (*p) (int ,int);
	int r;
	printf("Enter the values of a and b;");
	scanf("%d %d",&a,&b);
	p=add;
	r=(*p)(a,b);
	printf("value after addition is:%d",r);
	return 0;
}
int add(int a,int b)
{
	int c=a+b;
	return c;
	
}

//printing structure
#include<stdio.h>
struct structure
{
	int a;
	char b;
	float c;
};
int main()
{
	struct structure s1;
	s1.a=5;
	s1.b='S';
	s1.c=5.5;
	printf("a is %d\n",s1.a);
	printf("b is %c\n",s1 .b );
	printf("c is %f\n",s1.c);
	return 0;
}*/

//printing structure
#include<stdio.h>
struct structure
{
	int a;
	char b;
	float c;
}s1;
int main()
{
	
	s1.a=5;
	s1.b='S';
	s1.c=5.5;
	printf("a is %d\n",s1.a);
	printf("b is %c\n",s1 .b );
	printf("c is %f\n",s1.c);
	