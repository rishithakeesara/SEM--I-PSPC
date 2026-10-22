#include<stdio.h>
int main()
{
	int i,n,F,S,Th;
	printf("Enter n value");
	scanf("%d",&n);
	F=0;
	S=1;
	printf("%d\t","%d\t",F,S);
	for(i=3;i<=n;i++)
	{
		Th=F+S;
		printf("%d\t",Th);
		F=S;
		S=Th;
	}
	return 0;
	
}
