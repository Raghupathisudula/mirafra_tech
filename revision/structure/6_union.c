#include<stdio.h>
union student
{
	short int id;
	char name;
	float per;
	int marks;
};
int main()
{
	union student a;
	printf("%p %p %p %p\n",&a.id,&a.name,&a.per,&a.marks);
}
