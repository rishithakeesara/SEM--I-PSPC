#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("enter no.of elements in array\n");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
	 scanf("%d",& a[i]);
	 if(a[i]%2==0)
	 printf("even number is %d\t",a[i]);
  }
  for(i=0;i<n;i++)
  {
  	if(a[i]%2!=0)
  	printf("odd number is %d\t",a[i]);
  }
   return 0;
  }
 
