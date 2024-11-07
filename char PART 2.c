//string function
#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	printf("Enter name:");
	fgets(name,sizeof(name),stdin);
	int l=strlen(name);
	printf("length of the given string is %d",l);
	return 0;
}

//printing strcpy
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("Enter the name:");
	fgets(str1,sizeof(str1),stdin);
	strcpy(str2,str1);
	printf("%s",str1);
	printf("%s",str2);
	return 0;
}

//strcat values
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20]="c-programming";
	char str2[20]="language";
	strcat(str1,str2);
	printf("value of first string is:%s",str1);
	return 0;
}

//string equalor not
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("Enter the 1st string:");
	gets(str1);
	printf("Enter the 2nd string:");
	gets(str2);
	if(strcmp(str1,str2)==0)
		printf("string are equal");
	else
		printf("String are not equal");
	return 0;
}

//value of the variable
#include<stdio.h>
#include<string.h>
int main()
{
	int n=8;
	printf("value of the variable is %d\n",n);
	printf("Memory address of the variable is %p\n",&n);
	return 0;
}