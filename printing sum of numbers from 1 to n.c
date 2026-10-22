#include<stdio.h>
int main()
{
	int i,n,sum;
	printf("Enter n value");
	scanf("%d",&n);
	sum=0;
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("sum=%d\n",sum);
	return 0;
}
