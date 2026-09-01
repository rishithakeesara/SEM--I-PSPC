#include<stdio.h>
int main()
{
	float x,celsius;
	printf("enter x value");
	scanf("%f",&x);
	celsius=(x-32)*5.0/9.0;
	printf("%f",celsius);
	return 0;
}
