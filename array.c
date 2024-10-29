/*//printing values
#include<stdio.h>
int main()
{
	int i=0,j=0;
	int a[3][4]={{1,2,3,4},{2,3,4,7},{3,4,5,5}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("a[%d] [%d] = %d \n",i,j,a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;  
}

//printing matrix
#include<stdio.h>
int main()
{
	int i=0,j=0;
	int g,h;
	printf("Enter row size:");
	scanf("%d",&g);
	printf("Enter column size:");
	scanf("%d",&h);
	int a[g][h];
	printf("Enter matrix elements:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("a[%d] [%d] =",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("Display elements:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("a[%d] [%d] = [%d]\n",i,j,a[i][j]);
		}
	}
	printf("Matrix:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//printing two matrix
#include<stdio.h>
int main()
{
	int i=0,j=0;
	int g,h;
	printf("Enter row size:");
	scanf("%d",&g);
	printf("Enter column size:");
	scanf("%d",&h);
	int a[g][h];
	int b[g][h];
	printf("Enter first matrix elements:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("a[%d] [%d] =",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("First matrix:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter Second matrix elements:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("b[%d] [%d] =",i,j);
			scanf("%d",&b[i][j]);
			
		}
	}
	printf("Second matrix:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}

//printing add two matrix
#include<stdio.h>
int main()
{
	int i=0,j=0;
	int g,h;
	printf("Enter row size:");
	scanf("%d",&g);
	printf("Enter column size:");
	scanf("%d",&h);
	int a[g][h];
	int b[g][h];
	printf("Enter first matrix elements:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("a[%d] [%d] =",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("First matrix:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter Second matrix elements:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("b[%d] [%d] =",i,j);
			scanf("%d",&b[i][j]);
			
		}
	}
	printf("Second matrix:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("Addition of two matrix:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}

//substraction matrix

#include<stdio.h>
int main()
{
	int i=0,j=0;
	int g,h;
	printf("Enter row size:");
	scanf("%d",&g);
	printf("Enter column size:");
	scanf("%d",&h);
	int a[g][h];
	int b[g][h];
	printf("Enter first matrix elements:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("a[%d] [%d] =",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("First matrix:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter Second matrix elements:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("b[%d] [%d] =",i,j);
			scanf("%d",&b[i][j]);
			
		}
	}
	printf("Second matrix:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("Addition of two matrix:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("%d\t",a[i][j]*b[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}

//Multiplication two matrix

#include<stdio.h>
int main()
{
	int i=0,j=0;
	int g,h;
	printf("Enter row size:");
	scanf("%d",&g);
	printf("Enter column size:");
	scanf("%d",&h);
	int a[g][h];
	int b[g][h];
	printf("Enter first matrix elements:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("a[%d] [%d] =",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("First matrix:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter Second matrix elements:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("b[%d] [%d] =",i,j);
			scanf("%d",&b[i][j]);
			
		}
	}
	printf("Second matrix:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("Multiplication of two matrix:\n");
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			int c=0;
			for( int k=0;k<h;k++)
			{
				c=c+(a[i][k]*b[k][j]);
			}
			printf("%d",c);
			printf("\t");
		}
	printf("\ n");
	}
	return 0;
	
}

//printing biggest number in array
#include<stdio.h>
int main()
{
	int i,n,a[50];
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter number %d:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
	}
	printf("Biggest number is %d",a[0]);
	
}*/

#include<stdio.h>
int main()
{
	int i,n,a[50];
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter number %d:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
		else
		{
			a[0]=a[0]
		}
	}
	printf("Biggest number is %d",a[0]);
	
}