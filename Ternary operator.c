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

//Finding the biggest values nested if
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a value:");
	scanf("%d",&a);
	printf("Enter b value:");
	scanf("%d",&b);
	printf("Enter c value:");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is the biggest number");
		}
		else{
			printf("c is the biggest number");
		}
	}
	if(b>a)
	{
		if(b>c)
		{
			printf("b is the biggest number");
		}
		else
		{
			printf("c is the biggest number");
		}
	}
	
}

//Finding Arithmetic Values
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a symbol:");
	scanf("%c",&a);
	if (a=='+' || a=='-' || a=='/' || a=='%')
	{
		printf("%c is arithmetic operator",a);
	}
	else{
		printf("%c is special character",a);
	}
	return 0;
}

//Printing voewl or not
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a symbol:");
	scanf("%c",&a);
	if (a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='o')
	{
		printf("%c is voewl",a);
	}
	else{
		printf("%c is constant",a);
	}
	return 0;
}

//Printing Ternary operator
#include<stdio.h>
int main()
{
	int a=5;
	a>10 ? printf("a is biggest number") : printf("a is smallest number");
	return 0;
}

//Printing biggest values using ternary operator
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a value:");
	scanf("%d",&a);
	printf("Enter b value:");
	scanf("%d",&b);
	printf("Enter c value:");
	scanf("%d",&c);
	a>b ? a>c ? printf("a is big") : printf("c is big") : b>c? printf("b is big") : printf("c is big");
	return 0;
}

//Finding odd or even numbers
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a value:");
	scanf("%d",&a);
	a%2==0?printf("even") : printf("odd");
	return 0;
}

//Finding lowercase and uppercase
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a value:");
	scanf("%c",&a);
	a>=97 && a<=122?printf("loewr"):a>=65 && a<=90? printf("upper"):printf("it is not a alphabet");
}

//Finding single digit or not a single digit
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a value:");
	scanf("%d",&a);
	a>=0 && a<=9?printf("single digit number") : printf("it is not a single digit number");
}

//Printing square values
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a length:");
	scanf("%d",&a);
	printf("Enter b breadth:");
	scanf("%d",&b);
	a==b?printf("it is a square") : printf("it is a not square (or) it is rectangle");
	
}

//Finding  bonus values
#include<stdio.h>
int main()
{
	int s,exp;
	printf("Enter salary:");
	scanf("%d",&s);
	printf("Enter years of experience:");
	scanf("%d",&exp);
	if (exp>5)
	{
		s*=0.05;
		printf("bonus is %d",s);
	}
	else
	{
		printf("no bonus");
	}
}
//calcute monthly salary
#include <stdio.h>

int main() {
    int s, exp, monthly_salary, exp_months;
    float bonus;

    printf("Enter yearly salary: ");
    scanf("%d", &s);

    printf("Enter years of experience: ");
    scanf("%d", &exp);

    // Calculate monthly salary
    monthly_salary = s / 12;

    // Convert experience to months
    exp_months = exp * 12;

    if (exp_months > 60) { // 60 months = 5 years
        bonus = s * 0.05;
        printf("Bonus is %.2f\n", bonus);
    } else {
        printf("No bonus\n");
    }

    printf("Your monthly salary is %d\n", monthly_salary);
    printf("Your experience in months is %d\n", exp_months);

    return 0;
}

//Attendance Percentage
#include<stdio.h>
int main()
{
	int c,a;
	printf("Enter total number of classes:");
	scanf("%d",&c);
	printf("Enter number of classes attended:");
	scanf("%d",&a);
	int Attendance=a*100/c;
	if(Attendance>=75)
	{
		printf("Eligible for writing exams");
	}
	else
	{
		printf("Not eligible for writing exams");
	}
}

//profit or loss
#include<stdio.h>
int main()
{
	int ap,sp,diff;
	printf("Enter actual price of product:");
	scanf("%d",&ap);
	printf("Enter sales price of product:");
	scanf("%d",&sp);
	if(ap>sp)
	{
		diff=ap-sp;
		printf("%d is loss",diff);
	}
	else
	{
		diff=sp-ap;
		printf("%d is profit",diff);
	}
}

//Students Grades
#include<stdio.h>
int main()
{
	float a;
	char c;
	printf("Enter your marks:");
	scanf("%f",&a);
	if(a<25)
	{
		c='F';
	}
	else if((a>=25) && (a<45))
	{
		c='E';
	}
	else if((a>=45) && (a<60))
	{
		c='D';
	}
	else if((a>=60) && (a<75))
	{
		c='C';
	}
	else if((a>=75) && (a<80))
	{
		c='B';
	}
	else
	{
		c='A';
	}
	printf("your grade is %c",c);
	return 0;
}

//Printing oldest person
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first person age:");
	scanf("%d",&a);
	printf("Enter the second person age:");
	scanf("%d",&b);
	printf("Enter the third person age:");
	scanf("%d",&c);
	if (a>b && a>c)
	{
		printf("oldest is first person with %d age",a);
	}
	else if(b>a && b>c)
	{
		printf("oldest is second person with %d age",b);
	}
	else if(c>a && c>b)
	{
		printf("oldest is third person with %d age",c);
	}
	else
	{
		printf("All are in equal age");
	}
	return 0;
}

//Switch case
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
	}
	return 0;
}

//Printing Arithmetic with using switch case
#include<stdio.h>
int main()
{
	int a,b,c,op;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter b number:");
	scanf("%d",&b);
	printf("add\n");
	printf("sub\n");
	printf("mul\n");
	printf("div\n");
	printf("Enter your choice");
	scanf("%d",&op);
	switch (op){
		case 1:
			c=a+b;
			printf("Add %d",c);
			break;
		case 2:
			c=a-b;
			printf("sub %d",c);
			break;
		case 3:
			c=a*b;
			printf("mul %d",c);
			break;
		case 4:
			c=a/b;
			printf("sub %d",c);
			break;
		case 5:
			printf("Enter a valid choice");
	}return 0;
	
}


