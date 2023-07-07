#include<stdio.h>
//#pragma pack(1)
#define SIZE(s) ((char *)(&s+1)-(char *)&s)
struct student
{
	int x;
	double y;
	char z;
};

int main()
{
	struct student s={1,2,'a'};
	printf("%ld\n",sizeof(s));
}
