#include<stdio.h>
#include<string.h>
union s
{
	char x[100];
	int y;
	float z;
};
int main()
{
	union s a;//={"raghu"};
//	scanf("%s",a.x);
	strcpy(a.x,"raghu");
	printf("%s\n %p\n",a.x,&a.x);
	a.y=4;
	printf("%d\n %p\n",a.y,&a.y);
	a.z=4.5;
	printf("%f\n %p\n",a.z,&a.z);
}
