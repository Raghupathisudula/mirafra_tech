#include<stdio.h>
struct student
{
	int id;
	char name[50];
	float per;
};
int main()
{
	struct student s;
	printf("enter the given details\n");
	scanf("%d %s %f",&s.id,s.name,&s.per);
	printf("%d %s %f",s.id,s.name,s.per);
}

