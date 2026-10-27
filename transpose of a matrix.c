#include<stdio.h>
int main()
{
	int i,j,r,c,p;
	printf("Enter r and c values");
	scanf("%d%d",&r,&c);
	int a[r][c];
	p=r*c;
	printf("Enter %d elements",p);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of the matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
