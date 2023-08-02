#include<stdio.h>
struct marks
{
	int m1;
	int m2;
	int m3;
};
struct student
{
	short int id;
	char name[20];
	float per;
	struct marks m ;
};
int main()
{
	struct student s;
	printf("enter the student details\n");
	scanf("%hd %s %f %d %d",&s.id,s.name,&s.per,&s.m.m1,&s.m.m2);
	printf("%hd %s %f %d %d\n",s.id,s.name,s.per,s.m.m1,s.m.m2);
}
