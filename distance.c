#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,A,B,l;
	printf("enter a,b,c,d values");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	A=pow(a-b,2);
	B=pow(c-d,2);
	l=sqrt(A+B);
	printf("%f",l);
	return 0;
}
