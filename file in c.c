//creating  a file
#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("ranjith.txt","w");
}

//writing a file -fprint
#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("ranjith.txt","w");
	char a[50]="MANAPPARAI";
	printf("%s",a);
	fprintf(fp,"%s",a);
	fclose(fp);
}

//fputs()
#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("ranjith.txt","w");
	fputs("SYSTECH-C PROGRAMMING LANGUAGE",fp);
	fclose(fp);
}

//file fputc()
#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("ranjith.txt","w");
	char a[50]="MANAPPARAI\n";
	for(int i=0;a[i]!='\n';i++)
	{
		fputc(a[i],fp);
	}
	fclose(fp);
	return 0;
}

//file-fgets
#include<stdio.h>
int main()
{
	FILE *p;
	char txt[30];
	p=fopen("ranjith.txt","r");
	fgets(txt,40,p);
	printf("%s\n",txt);
	fclose(p);
	return 0;
}