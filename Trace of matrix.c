 #include<stdio.h>
 int main()
 {
 	int i,j,R,C,P;
 	int sum=0;
 	printf("Enter R and C values\n");
 	scanf("%d%d",&R,&C);
 	int a[R][C];
 	P=R*C;
 	printf("Enter %d elmemnts",P);
 	for(i=0;i<R;i++)
 	{
 		for(j=0;j<C;j++)
 		{
 			scanf("%d",&a[i][j]);
     	}
	 }
	 for(i=0;i<R;i++)
	 {
	 	for(j=0;j<C;j++)
	 	{
	 		if(i==j)
	 		{
	 			sum=sum+a[i][j];
			 }
		 }
	 }
	 printf("Trace of matrix is %d",sum);
	 return 0;
 }
