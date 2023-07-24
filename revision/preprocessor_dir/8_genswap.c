#include<stdio.h>
#define genswap(dt,fn) dt fn (dt *a,dt *b)\
{\
	int temp;\
	temp=*a;\
	*a=*b;\
	*b=temp;\
}

	genswap(int,swapi)
	genswap(float,swapf)
	genswap(char,swapc)
	genswap(double,swapd)

int main()
{
	int a=4,b=5;
	float m=3.12,n=4.23;
	char p='s',q='r';
	double x=4.4567889,y=5.98765454;
	swapi(&a,&b);
	printf("after swap is %d %d\n",a,b);
	swapf(&m,&n);
	printf("after swap is %f %f\n",m,n);
	swapc(&p,&q);
	printf("after swap is %c %c\n",p,q);
	swapd(&x,&y);
	printf("after swap is %lf %lf\n",x,y);
}

