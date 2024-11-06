//printing char
#include<stdio.h>
int main()
{
	char a[]="systech";
	printf("%c",a[0]);
	return 0;
}

//string using strlen
#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="systech";
	int d=strlen(a);
	printf("%d\n",d);
	for(int i=0;i<d;i++)
	{
		printf("%c\n",a[i]);
	}
	return 0;
}

//string size
#include<stdio.h>
int main()
{
	char a[]="systech";
	int d=sizeof(a);
	printf("%d\n",d);
	for(int i=0;i<d;i++)
	{
		printf("%c\n",a[i]);
	}
	return 0;
}

//string array
#include<stdio.h>
int main(){
	char a[]={'s','y','s','t','e','c','h','\0'};
	printf("%s",a);
	return 0;
}

//index value
#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="MONEY";
	printf("%s\n",a);
	a[0]='H';
	printf("%s",a);
	return 0;
}

//size of strings terminating character
#include<stdio.h>
int main(){
	char a[]="SYSTECH";
	char b[]={'s','y','s','t','e','c','h','\0'};
	printf("null\n");
	printf("size of  a is %lu\n",sizeof(a));
	printf("size of b is %lu\n",sizeof(b));
	char c[]={'s','y','s','t','e','c','h','\0'};
	printf("null\n");
	printf("size of  a is %lu\n",sizeof(a));
	printf("size of b is %lu\n",sizeof(c));
	return 0;
}

//scanf and printf
#include<stdio.h>
int main()
{
	char name[30];
	printf("Enter name:");
	scanf("%s",&name);
	printf("%s",name);
	return 0;
}

//string value
#include<stdio.h>
int main()
{
	char name[30];
	printf("Enter name:");
	fgets(name,sizeof(name),stdin);
	puts(name);
	return 0;
}
	