#include<stdio.h>
int main()
{
	float basicsalary,grosssalary;
	printf("enter the basicsalary value");
	scanf("%f",&basicsalary);
	grosssalary=basicsalary+0.1*basicsalary+0.25*basicsalary;
	printf("%f",grosssalary);
	return 0;
}
