//printing structure
#include<stdio.h>
struct structure
{
	int a;
	char b;
	float c;
}s1;
int main()
{
	
	s1.a=5;
	s1.b='S';
	s1.c=5.5;
	printf("a is %d\n",s1.a);
	printf("b is %c\n",s1 .b );
	printf("c is %f\n",s1.c);
	return 0;
}

//printing structure
#include<stdio.h>
struct structure
{
	int a;
	char b;
	float c;
}s1,s2;
int main()
{
	
	s1.a=5;
	s1.b='S';
	s1.c=5.5;
	s2.a=4;
	s2.b='C';
	s2.c=2.2;
	printf("a is %d\n",s1.a);
	printf("b is %c\n",s1 .b );
	printf("c is %f\n",s1.c);
	printf("a is %d\n",s2.a);
	printf("b is %c\n",s2 .b );
	printf("c is %f\n",s2.c);
	return 0;
}

//printing structure
#include<stdio.h>
struct stud_details
{
	char name[20];
	int age;
	
};
int main()
{
	struct stud_details s1,s2;
	strcpy(s1.name,"RANJITH");
	s1.age=23;
	strcpy(s2.name,"RISHI");
	s2.age=21;
	printf("name:%s\n",s1.name);
	printf("age:%d\n",s1.age);
	printf("name:%s\n",s2.name);
	printf("age:%d\n",s2.age);
	return 0;
}

//printing modifyvalues in structure
#include<stdio.h>
struct stdu_details
{
	char name[20];
	int age;
};
int main()
{
	struct stdu_details  s1={"RANJITH",23};
	s1.age=25;
	printf("name:%s\n",s1.name);
	printf("age:%d\n",s1.age);
	return 0;
}

//printing copy structure
#include<stdio.h>
struct stud_details{
	char name[20];
	int age;
};
int main()
{
	struct stud_details s1={"RANJITH",22};
	struct stud_details s2;
	s2=s1;
	printf("name:%s\n",s1.name);
	printf("age:%d\n",s2.age);
	return 0;
}

//type of keyword
#include<stdio.h>
int main()
{
	typedef char r;
	r a[50]="RANJITH";
	r b[50]="KUMAR";
	printf("%s %s",a,b);
	return 0;
}

//printing typedef keyword
#include<stdio.h>
int main()
{
	typedef float ft;
	ft a,b;
	a=5.3;
	b=4.2;
	printf("A is %f\n",a);
	printf("B is %f\n",b);
	return 0;
}

//printing typedef in structure
#include<stdio.h>
struct stud_details{
	char name[20];
	int age;
};
int main()
{
	typedef struct stud_details std;
	std s1,s2;
	strcpy(s1.name,"RANJITH");
	s1.age=22;
	strcpy(s2.name,"RISHI");
	s2.age=21;
	printf("name:%s\n",s1.name);
	printf("age:%d\n",s1.age);
	printf("name:%s\n",s2.name);
	printf("age:%d\n",s2.age);
	return 0;
}

//printing student details
#include<stdio.h>
struct stud_details{
	char name[20];
	int age;
};
struct edu_details{
	char course[50];
	char department[50];
	struct stud_details stud;

};
int main()
{
	struct edu_details ed;
	strcpy(ed.stud.name,"RANJITH");
	ed.stud.age=24;
	strcpy(ed.course,"Msc");
	strcpy(ed.department,"computer science");
	printf("name :%s\n",ed.stud.name);
	printf("age :%d\n",ed.stud.age);
	printf("course :%s\n",ed.course);
	printf("name :%s\n",ed.department);
	return 0;
}

//printing passing structure
#include<stdio.h>
struct edu_details
{
	char course[50];
	char name[50];
	struct stud_details
	{
		char name[20];
		int age;
	}stud;
};
int main()
{
	struct edu_details ed;
	details(ed);
	return 0;
}
void details(struct edu_details ed){
	strcpy(ed.stud.name,"RANJITH");
	ed.stud.age=22;
	strcpy(ed.course,"Msc");
	strcpy(ed.department,"computer science");
	printf("name:%s\n",ed.stud.name);
	printf("age:%d\n",ed.stud.age);
	printf("course:%s\n",ed.course);
	printf("department:%s\n",ed.department);
}

//printing size of structure
#include<stdio.h>
struct structure
{
	int a;
	char b;
};
int main()
{
	struct structure s1;
	printf("Size of structre:%lu",sizeof(s1));
	return 0;
}
//structure padding
#include<stdio.h>
#pragma pack(1)
struct structure
{
	int a;
	char b;
};
int main()
{
	struct structure s1;
	printf("Size of structure:%d",sizeof(s1));
	return 0;
}

//printing structure pointer
#include<stdio.h>
struct stud_details
{
	char name[20];
};
int main()
{
	struct stud_details s,*p;
	p=&s;
	printf("Enter name:");
	scanf("%s",&p->name);
	printf("Details:\n");
	printf("name:%s\n",p->name);
	return 0;
}

//dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
struct stud{
	char name[30];
	int age;
	
};
int main()
{
	struct stud *p;
	int i,n;
	printf("Enter the number of persons:");
	scanf("%d",&n);
	p=(struct stud*) malloc(n*sizeof(struct stud));
	for(i=0;i<n;i++)
	{
		printf("Enter %d student details:\n",i+1);
		printf("name:");
		scanf("%s",&(p+i)->name);
		printf("age:");
		scanf("%d",&(p+i)->age);
	}
	printf("Student details:\n");
	for(i=0;i<n;i++)
		printf("name: %s\tage: %d\n",(p+i)->name,(p+i)->age);
	return 0;
}

//printing struct function
#include<stdio.h>
struct stud
{
	char name[20];
	int age;
};
struct stud getInfo();
int main()
{
	struct stud s;
	s=getInfo();
	printf("\nStudent Details:\n");
	printf("name:%s\n",s.name);
	printf("roll:%d",s.age);
	return 0;
}
struct stud getInfo()
{
	struct stud s1;
	printf("Enter name:");
	scanf("%s",&s1.name);
	printf("Enter age:");
	scanf("%d",&s1.age);
	return s1;
}

//union
#include<stdio.h>
#include<string.h>
union stud
{
	int age;
	char name[50];
};
int main()
{
	union stud s;
	strcpy(s.name,"RANJITH");
	printf("name:%s\n",s.name);
	s.age=22;
	printf("age:%d\n",s.age);
	return 0;
}

//difference between union and structure
#include<stdio.h>
#include<string.h>
union stud1
{
	int age;
	char name[50];
}s;
struct stud2
{
	int age;
	char name[50];
}s1;
int main()
{
	printf("size of union is %d\n",sizeof(s));
	printf("size of structure is %d\n",sizeof(s1));
	return 0;
}





	