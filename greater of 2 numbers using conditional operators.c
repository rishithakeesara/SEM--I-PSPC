#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers to check greater value\n");
	scanf("%d%d",&a,&b);
	(a>b)?printf("%d is greater",a):printf("%d is greater",b);
	return 0;
}
