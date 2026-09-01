#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter two values");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("a=%d\t b=%d\t",a,b);
	return 0;
}
