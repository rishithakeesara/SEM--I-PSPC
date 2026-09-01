#include<stdio.h>
int main()
{
	float p,r,t,n,compoundinterest;
	printf("enter principalamount,rateofinterest,time,number of times compound interst per year");
	scanf("%f%f%f%f",&p,&r,&t,&n);
	compoundinterest= pow(p*(1+r/n),n*t);
	printf("%f",compoundinterest);
	return 0;
}
