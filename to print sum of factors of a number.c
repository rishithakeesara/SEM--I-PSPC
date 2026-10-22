#include<stdio.h>
int main()
{
	int n,i,sum;
	printf("Enter n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum=0;
			sum=sum+i;
		}
	}
	printf("%d",sum);
	return 0;
}
