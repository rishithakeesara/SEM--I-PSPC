#include<stdio.h>
int main()
{
	int a,b,add,sub,mul,mod;
	float div;
	printf("enter two values to perform arithematic operation\n");
	scanf("%d%d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	mod=a%b;
	div=(float)(a/b);
	printf("sum=%d\n",add);
	printf("subtraction=%d\n",sub);
	printf("multiplication=%d\n",mul);
	printf("remainder=%d\n",mod);
	printf("division=%f\n",div);
	return 0;
}
