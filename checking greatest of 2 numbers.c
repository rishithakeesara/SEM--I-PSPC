#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a and b values");
	scanf("%d%d",&a,&b);
	if(a>b)
	printf("%d is greater",a);
	else if(b>a)
	printf("%d is greater",b);
	else 
	printf("both are equal");
	return 0;
}
