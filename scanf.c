 //printing scanf values
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a:");
	scanf("%d",&a);
	printf("%d",a);
	return 0;
}

//getchar and putchar values
#include<stdio.h>
int main()
{
	char a;// using int
	a=getchar();
	putchar(a);
	return 0;
}

//add two values with using function

#include<stdio.h>
int sum(){
	int a,b,c;
	a=9;
	b=5;
	c=a+b;
	return c;
}
int main(){
	int h=sum();
	printf("sum is %d",h);
	return 0;
	
}

//printing character with using function
#include<stdio.h>
void simple()
{
	char a[40]="Ranjith";
	printf("Hi iam %s",a);
}
int main()
{
	simple();
	return 0;
}

//Using Function
#include<stdio.h>
char x[]="Ranjith";
void simple()
{
	char x[]="python programming language";
	printf("c is %s\n",x);
}
int main()
{
	simple();
	printf("hii i am %s",x);
	return 0;   
}

//printing strcat function

#include<stdio.h>
int main()
{
	char text1[]="c ";
	char text2[]="programming";
	strcat(text1,text2);
	printf("%s",text1);
	return 0;
}