//array values
#include<stdio.h>
int main()
{
	int a[]={2,4,6,8};
	for(int i=0;i<=3;i++)//i<4
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

//changing array values
#include<stdio.h>
int main()
{
	int a[]={2,4,6,8};
	for(int i=0;i<=3;i++)//i<4
	{
		printf("%d\n",a[i]);
	}
int ch,b;
printf("Enter the index of element you want to change:");
scanf("%d",&ch);
printf("Enter value:");
scanf("%d",&b);
a[ch]=b;
for (int i=0;i<=3;i++)
{
	printf("%d\n",a[i]);
	
}
return 0;
}

//N numeber of array values
#include<stdio.h>
int main()
{
	int n=5;
	int a[n];
	for(int i=0;i<=4;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

//sorting values
#include<stdio.h>
int main()
{
	int n=5,i;
	int j,temp;
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("Before sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("After sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
//sorting values

#include<stdio.h>
int main()
{
	int n=5,i;
	int j,temp;
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("Before sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("After sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}


//array largest elements
#include<stdio.h>
void main()
{
	int a[100],i,n,f1,s1;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	f1=a[0];
	s1=a[1];
	for(i=0;i<n;i++)
	{
		if(a[i]>f1)
		{
			s1=f1;
			f1=a[i];
		}
		else if (a[i]>s1&&a[i]!=f1)
		{
			s1=a[i];
		}
	}
	printf("largest= %d , second largest=%d",f1,s1);
	
}