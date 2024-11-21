//arithmetic values using function
#include<iostream>
using namespace std;
void add(int g,int h)
{
	int c;
	c=g+h;
	cout<<"Addition is "<<c<<endl;
}
void sub(int g,int h)
{
	int c1;
	c1=g-h;
	cout<<"Substraction is"<<c1<<endl;
}
void mul(int g,int h)
{
	int c2;
	c2=g*h;
	cout<<"Multiplication is"<<c2<<endl;
}
void abi(int g,int h)
{
	int c3;
	c3=g/h;
	cout<<"Division is"<<c3<<endl;
}
int main()
{
	int a,b;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	add(a,b);
	sub(a,b);
	mul(a,b);
	abi(a,b);
	return 0;
}

//finding interest
#include<iostream>
using namespace std;
void si(int a,int b,int c);
int main()
{
	int p,n,r;
	cout<<"Enter p:";
	cin>>p;
	cout<<"Enter n:";
	cin>>n;
	cout<<"Enter r:";
	cin>>r;
	si(p,n,r);
}
void si(int a,int b,int c)
{
	int i;
	i=(a*b*c)/100;
	cout<<"si is"<<i;
}

//printing mass energy values
#include<iostream>
using namespace std;

void massenergy(int a,int b)
{
	int me;
	me=a*b*b;
	cout<<"Mass Energy is"<<me;
}

int main()
{
	int m,c;
	cout<<"Enter m:";
	cin>>m;
	cout<<"Enter c:";
	cin>>c;
	massenergy(m,c);
}

//printing factorial
#include<iostream>
using namespace std;

void fact(){
	int i,n,f=1;
	cout<<"Enter n:";
	cin>>n;
	for(i=1;i<=n;i++){
		f*=i;
	}
	cout<<"Factorial value is"<<f;
}
int main()
{
	fact();
	return 0;
}

//printing user defined function
#include<iostream>
using namespace std;

void add(int a,int b)
{
	int c;
	c=a+b;
	cout<<"sum is"<<c;
}
int main()
{
	int x=2,y=3;
	add(x,y);
	return 0;
}

//printing sum of numbers
#include<iostream>
using namespace std;

add()
{
	int a=2,b=3;
	int c;
	c=a+b;
	return c;
}
int main()
{
	int sum=add();
	cout<<"sum is"<<add();
	return 0;
}

//printing add number
#include<iostream>
using namespace std;

int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int main(){
	int x=2,y=3;
	int sum=add(x,y);
	cout<<add(x,y);
	return 0;
}

//printing user defined functions
#include<iostream>
using namespace std;

int add()
{
	int c;
	int a=2,b=3;
	c=a+b;
	cout<<"sum is"<<c;
	return 0;
}
int main(){
	add();
	return 0;
}

//sum of values
#include<iostream>
using namespace std;

void add(int x,int y)
{
	int z=x+y;
	cout<<"sum is"<<z;
}
int main()
{
	int a,b;
	a=5;
	b=2;
	add(a,b);
	return 0;
}

//printing parameters
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	a=5;
	b=2;
	add(&a,&b);
	return 0
}
void add(int *x,int *y)
{
	int z=*x+*y;
	cout<<"sum is"<<z;
}

