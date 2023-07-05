#include<stdio.h>
union s
{
	char name[10];
	int id;
	float per;
};
int main()
{
	union s a={"raghu"};
	printf(" %s",a.name);
a.id=2;
	printf(" %d",a.id);
//	a.name="raghu";
	//printf("%s",a.name);
	a.per=88.8;
	printf("%f",a.per);
}









