#include<stdio.h>
int main()
{
	float p,r,t,n,CI;
	printf("enter principalamount,rateofinterest,time in years,number of times compound interst per year");
	scanf("%f%f%f%f",&p,&r,&t,&n);
	CI= p*pow((1+r/n),n*t);
	printf("%f",CI);
	return 0;
}
