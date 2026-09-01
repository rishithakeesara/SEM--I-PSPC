#include<stdio.h>
int main()
{
	float p,t,r,simpleinterest;
	printf("enter principalamount,time,rateofinterest values");
	scanf("%f%f%f",&p,&t,&r);
	simpleinterest=(p*t*r)/100;
	printf("%f",simpleinterest);
	return 0;
}
