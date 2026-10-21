#include<stdio.h>
int main()
{
	int a;
	printf("Enter a value");
	scanf("%d",&a);
	printf("%d++=%d\n",a,a++);
	printf("++%d=%d\n",a,++a);
	printf("%d--=%d\n",a,a--);
	printf("--%d=%d\n",a,--a);
	return 0;
}
