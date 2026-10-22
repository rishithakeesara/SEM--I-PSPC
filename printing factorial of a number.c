#include<stdio.h>
int main()
{
	int i,n,fact;
	printf("Enter n value");
	scanf("%d",&n);
	fact=1;
	i=1;
	while(i<=n)
	{
	fact=fact*i;
	i++;
   }
    printf("factorial=%d",fact);
    return 0;
}

