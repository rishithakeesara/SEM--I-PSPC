#include<stdio.h>  
int main()
{
   int a,b,c;
   printf("enter a,b,c values");
   scanf("%d%d%d",&a,&b,&c);
   if ((a==b)&&(b==c)&&(c==a))
   printf("The triangle formed is equilateral");
   else if((a==b)||(b==c)||(c==a))
   printf("The triangle formed is isosceles");
   else 
   printf("The triangle formed is scalene");
}
