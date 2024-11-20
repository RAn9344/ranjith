//printing array values
#include<iostream>
using namespace std;
int main()
{
	int a[]={2,4,6,8};
	for(int i=0;i<=3;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}

//changing array values
#include<iostream>
using namespace std;
int main()
{
	int a[]={2,4,6,8};
	for(int i=0;i<=3;i++)
	{
		cout<<a[i]<<endl;
	}
	int ch,b;
	cout<<"Enter the index of element you want to change:";
	cin>>ch;
	cout<<"Enter value:";
	cin>>b;
	a[ch]=b;
	for(int i=0;i<=3;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}

//n number of array values
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int a[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter a[" << i << "]: ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}

//sorting values
#include<iostream>
using namespace std;
int main()
{
	int n=5,i,j,temp,a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter a["<<i<<"]:";
		cin>>a[i];
	}
	cout<<"Before Sorting:\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
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
	cout<<"after sorting:"<<endl;
	for( i=0; i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}

//Sorting Values
#include<iostream>
using namespace std;
int main()
{
	int n=5,i,j,temp,a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter a["<<i<<"]:";
		cin>>a[i];
	}
	cout<<"Before Sorting:\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
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
	cout<<"after sorting:"<<endl;
	for( i=0; i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}

//Array Largest Element
#include<iostream>
using namespace std;
int main()
{
	int a[100],i,n,f1,s1;
	cout<<"Enter array size:";
	cin>>n;
	cout<<"Enter array elements:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
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
	cout<<"Largest ="<<f1<<"second largest ="<<s1;
}

//printing values
#include<iostream>
using namespace std;
int main()
{
	int i=0,j=0,a[3][4]={{1,2,3,4},{2,3,4,7},{3,4,5,5}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<"a["<<i<<"]"<<"["<<j<<"]"<<"="<<a[i][j]<<endl;
		}
		
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}

//printing matrix
#include<iostream>
using namespace std;
int main()
{
	int i=0,j=0,g,h;
	cout<<"Enter row size:";
	cin>>g;
	cout<<"Enter column size:";
	cin>>h;
	int a[g][h];
	cout<<"Enter Matrix elements:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			cout<<"a["<<i<<"]"<<"["<<j<<"] =";
			cin>>a[i][j];
		}
	}
	cout<<"Display Elements:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
	{
		cout<<"a["<<i<<"]"<<"["<<j<<"] ="<<a[i][j]<<endl;
	}
}
cout<<"Matrix:"<<endl;
for(i=0;i<g;i++)
{
	for(j=0;j<h;j++)
	{
		cout<<"\t"<<a[i][j];
	}
	cout<<endl;
}
return 0;
}

//printing two matrix
#include<iostream>
using namespace std;
int main()
{
	int i=0,j=0,g,h;
	cout<<"Enter row size:";
	cin>>g;
	cout<<"Enter column size:";
	cin>>h;
	int a[g][h];
	int b[g][h];
	cout<<"Enter Matrix elements:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			cout<<"a["<<i<<"]"<<"["<<j<<"] =";
			cin>>a[i][j];
		}
	}
	cout<<"First Matrix:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}
	cout<<"Enter Second Matrix elements:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			cout<<"b["<<i<<"]"<<"["<<j<<"]";
			cin>>b[i][j];
		}
	}
	cout<<"Second Matrix:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			cout<<"\t"<<b[i][j];
		}
		cout<<endl;
	}
	return 0;
}

//adding two matrix
#include<iostream>
using namespace std;
int main()
{
	int i=0,j=0,g,h;
	cout<<"Enter row size:";
	cin>>g;
	cout<<"Enter column size:";
	cin>>h;
	int a[g][h];
	int b[g][h];
	cout<<"Enter Matrix elements:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			cout<<"a["<<i<<"]"<<"["<<j<<"] =";
			cin>>a[i][j];
		}
	}
	cout<<"First Matrix:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}
	cout<<"Enter Second Matrix elements:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			cout<<"b["<<i<<"]"<<"["<<j<<"] =";
			cin>>b[i][j];
		}
	}
	cout<<"Second Matrix:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			cout<<"\t"<<b[i][j];
		}
		cout<<endl;
	}
	cout<<"Addition of two matrix:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			cout<<"\t"<<a[i][j]+b[i][j];
		}
		cout<<endl;
	}
	return 0;
}

//Substraction two matrix
#include<iostream>
using namespace std;
int main()
{
	int i=0,j=0,g,h;
	cout<<"Enter row size:";
	cin>>g;
	cout<<"Enter column size:";
	cin>>h;
	int a[g][h];
	int b[g][h];
	cout<<"Enter Matrix elements:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			cout<<"a["<<i<<"]"<<"["<<j<<"] =";
			cin>>a[i][j];
		}
	}
	cout<<"First Matrix:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}
	cout<<"Enter Second Matrix elements:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			cout<<"b["<<i<<"]"<<"["<<j<<"] =";
			cin>>b[i][j];
		}
	}
	cout<<"Second Matrix:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			cout<<"\t"<<b[i][j];
		}
		cout<<endl;
	}
	cout<<"Addition of two matrix:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			cout<<"\t"<<a[i][j]-b[i][j];
		}
		cout<<endl;
	}
	return 0;
}

//Multiplication Two matrix
#include<iostream>
using namespace std;
int main()
{
	int i=0,j=0,g,h;
	cout<<"Enter row size:";
	cin>>g;
	cout<<"Enter column size:";
	cin>>h;
	int a[g][h];
	int b[g][h];
	cout<<"Enter Matrix elements:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			cout<<"a["<<i<<"]"<<"["<<j<<"] =";
			cin>>a[i][j];
		}
	}
	cout<<"First Matrix:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}
	cout<<"Enter Second Matrix elements:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			cout<<"b["<<i<<"]"<<"["<<j<<"] =";
			cin>>b[i][j];
		}
	}
	cout<<"Second Matrix:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
			cout<<"\t"<<b[i][j];
		}
		cout<<endl;
	}
	cout<<"Multiplication of two matrix:"<<endl;
	for(i=0;i<g;i++)
	{
		for(j=0;j<h;j++)
		{
		int c=0;
		for(int k=0;k<h;k++)
		{
			c=c+(a[i][k]*b[k][j]);
		}
		cout<<c<<"\t";
		}
		cout<<endl;
	}
	return 0;
}

//biggest number in array
#include<iostream>
using namespace std;
int main()
{
	int i,n,a[50];
	cout<<"Enter n:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		
		cout<<"Enter number "<<i<<":";
		cin>>a[i];
		
	}
	for(i=0;i<n;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
	}
	cout<<"Biggest number is"<<a[0];
}