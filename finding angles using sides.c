#include<stdio.h>
int main()
{
	float a,b,c,A,B,C;
	printf("enter a,b,c values");
	scanf("%f%f%f",&a,&b,&c);
	A=acos(-pow(a,2)+pow(b,2)+pow(c,2));
	B=acos(pow(a,2)-pow(b,2)+pow(c,2));
	C=acos(pow(a,2)+pow(b,2)-pow(c,2));
	printf("%f%f%f",&A,&B,&C);
	return 0;
}


