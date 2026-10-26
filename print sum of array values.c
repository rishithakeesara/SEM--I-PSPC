#include<stdio.h>
int main()
{
	int i,n,a[100],sum=0;
	printf("enter no.of elements in array\n");
	scanf("%d",&n);
	printf("enter %d elements \n");
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	 sum=sum+a[i];
	 printf("%d",sum);
	 return 0;
}
