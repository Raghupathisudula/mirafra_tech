#include<stdio.h>
int main()
{
	int total;
	float per;
	int m1,m2,m3,m4,m5,m6;
	printf("enter the marks of students\n");
	scanf("%d %d %d %d %d %d",&m1,&m2,&m3,&m4,&m5,&m6);
	total=m1+m2+m3+m4+m5+m6;
	per=total/6;
	if(per>=80)
		printf(" honours\n");
	else if(per>=60)
		printf("firstdivison\n");
	else if(per>=50)
		printf("seconddivison\n");
	else if(per>=40)
		printf(" third divison\n");
	else if(per<=39)
		printf("fail\n");
}

