#include <stdio.h>

void Fun()
{
	auto int num = 10;
	num++;
	printf(" %d\n", num);
}

int main() 
{
	auto int count = 5;
	auto  int num; 
	printf("%d\n", count);
	printf("%d\n",num);
	Fun();
	printf(" %d\n", count);
	return 0;
}


