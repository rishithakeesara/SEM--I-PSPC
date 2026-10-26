#include <stdio.h>
int main()
{
	int n,i,a[100],s;
	printf("enter no.of elements in array\n");
	scanf("%d",&a[i]);
	printf("enter %d elements\n");
	for(i=0;i<n;i++)
	{
		if(s==a[i])
		{
			printf("the position of element in array is found\n",i+1);
		}
	}
	for(i=0;i<n;i++)
	{
		if (s!=a[i])
		{
			printf("the position of element in array is not found\n");
		}
	}
	return 0;
}
