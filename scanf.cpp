//printing scanf values
#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter the value";
cin>>a;
cout<<a;
return 0;
}

//getchar and putchar values
#include<iostream>
using namespace std;
int main()
{
int a;
a=getchar();
putchar(a);
return 0;
}

//add two values with using function
#include<iostream>
using namespace std;
int sum()
{
int a=9,b=5,c=a+b;
return c;
}
int main()
{
int h=sum();
cout<<"sum is"<<h;
return 0;
}

//printing character with using function
#include<iostream>
using namespace std;
void simple()
{
char a[]="programing language";
cout<<"c is"<<a;
}
int main()
{
simple();
return 0;
}

//using function
#include<iostream>
using namespace std;
char x[50]="programming language";
void simple()
{
char x[50]="language";
cout<<"c is"<<x<<endl;
}
int main()
{
simple();
cout<<"c is"<<x;
return 0;
}

//strcat funcation
#include<iostream>
using namespace std;
int main()
{
char text1[50]="C";
char text2[50]="programming";
strcat(text1,text2);
cout<<text1;
return 0;
}

//scanf string values and printing
#include<iostream>
using namespace std;
int main()
{
char text1[50];
char text2[50];
cout<<"Enter the first string:";
cin>>text1;
cout<<"Enter the second string:";
cin>>text2;
strcat(text1,text2);
cout<<"The Final String after string concatenation is:"<<text1;
return 0;
}

//printing square of a given numbers
#include<iostream>
using namespace std;
int main()
{
double a,g;
cout<<"Enter the number:";
cin>>a;
g=a*a;
cout<<"square of a given number is"<<g;
return 0;
}

//printing artithmetic two values
#include<iostream>
using namespace std;
int main()
{
int a=20,b=3;
cout<<a+b<<endl<<a-b<<endl<<a*b<<endl<<a/b<<endl<<a%b;
return 0;
}

//assignment operator
#include<iostream>
using namespace std;
int main()
{
int a=20,b=3;
int c;
c=a+b;
cout<<"value of c is"<<c<<endl;
c+=a;
cout<<"value of c is"<<c<<endl;
c-=a;
cout<<"value of c is"<<c<<endl;
c*=a;
cout<<"value of c is"<<c<<endl;
c/=a;
cout<<"value of c is"<<c<<endl;
c%=a;
cout<<"value of c is"<<c<<endl;
c=5;
c&=3;
cout<<"value of c is"<<c<<endl;
c|=a;
cout<<"value of c is"<<c<<endl;
c^=a;
cout<<"value of c is"<<c<<endl;
c=5;
c>>=a;
cout<<"value of c is"<<c<<endl;
c<<=a;
cout<<"value of c is"<<c<<endl;
return 0;
}

//comparision operator
#include<iostream>
using namespace std;
int main()
{
int a=20,b=3;
cout<<"a==b is"<<(a==b)<<endl;
cout<<"a==b is"<<(a!=b)<<endl;
cout<<"a==b is"<<(a>b)<<endl;
cout<<"a==b is"<<(a<b)<<endl;
cout<<"a==b is"<<(a>=b)<<endl;
cout<<"a==b is"<<(a<=b)<<endl;
return 0;
}

//logical operator
#include<iostream>
using namespace std;
int main()
{
int a=20,b=3,c=30,d=15;
cout<<((a>b)&&(c>d))<<endl;
cout<<((a>b)||(c>d))<<endl;
cout<<!((a>b)&&(c>d))<<endl;
return 0;
}
