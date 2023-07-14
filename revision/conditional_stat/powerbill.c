/*Find the power bill for the input number of units :
0 - 200 units : 100/- min
201 - 400 units : 100 + 0.65 per unit excess of 200
401 - 600 units : 230 + 0.80 per unit excess of 400
601 and above units : 390 + 1.00 per unit excess of 600  */
#include<stdio.h>
int main()
{
	float units,bill;
	printf("enter the number of units\n");
	scanf("%f",&units);
	int a,b,c;
	a=units-200;
	b=units-400;
	c=units-600;
	if(units<=200)
		printf("the power bill is 100");
	else if(units>200&&units<=400)
		printf("the power bill is %f\n",100+(a*0.65));
	else if(units>400&&units<=600)
		printf("the power bill is %f\n",230+(b*0.80));
	else if(units>600)
		printf("the power bill is %f\n",390+(c*1.00));
}

