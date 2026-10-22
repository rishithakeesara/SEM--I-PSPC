#include<stdio.h>
int main()
{ 
  int n,temp,rev,rem;
  printf("Enter n value");
  scanf("%d",&n);
  rev=0;
  temp=n;
  while(n>0)
  {
  	rem=n%10;
  	rev=rev*10+rem;
  	n=n/10;
  }
  if(temp==rev)
  {
  	printf("it is a palindrome");
  }
  else
  {
  	printf("it is not a palindrome");
  }
  return 0;
}
