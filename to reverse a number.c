#include<stdio.h>
int main()
{
	int n,rev,rem;
	printf("Enter n value");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("%d is reverse number",rev);
	return 0;
}
