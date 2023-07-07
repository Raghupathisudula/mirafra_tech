#include<stdio.h>
int fun(int y);
int main()
{
	static int x=10;
	int m=20;
	int y=x+m;
	printf("%d\n",y);
	int z=30;
	int p=y+z;
	fun(x);
	printf("%d\n",p);
}
/*int fun(int y)
{
	int b=5;
	int s=y+b;
	printf("%d\n",s);
}*/
