#include <stdio.h>
main()
{
	int mat[3][3];
	int i,j;
	printf("Input elements int the matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Element-[%d],[%d] : ",i,j);
			scanf("%d",(*(mat+i)+j));
		}
	}
	printf("\nThe matrix is :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*(*(mat+i)+j));
		}
		printf("\n");
	}
	
	int sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			sum=sum+mat[i][j];
		}
	}
	printf("\nThe sum of all diagonal elements is %d",sum);	
}
