#include<stdio.h>
int main()
{
	float b;
	float c;
	printf("营业额：");
	scanf("%f", &b);
	c = b * 0.09 + 1000;
	printf("工资；%f", c);
	return 0;
}
