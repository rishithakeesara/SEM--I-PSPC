#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbersto perform Assignment operation\n");
	scanf("%d%d",&a,&b);
	printf("%d+=%d=%d\n",a,b,a+=b);
	printf("%d-=%d=%d\n",a,b,a-=b);
	printf("%d*=%d=%d\n",a,b,a*=b);
	printf("%d/=%d=%d\n",a,b,a/=b);
	printf("%d%=%d=%d\n",a,b,a%=b);
	return 0;
}
