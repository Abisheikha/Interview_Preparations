//You are given an array of intervals- that is, an array of tuples(start,end). The array may not be sorted, and could contain overlapping intervals.
//Return another array where the overlapping intervals are merged. Input:[(1.3),(5,8),(4,10),(20,25)] Output:[(1,3),(4,10),(20,25)]

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int arr[50][10],i,j,n,temp1,temp2,l,k;
	printf("Enter the number of pairs:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i][0]>arr[j][0])
			{
				temp1=arr[i][0];
				arr[i][0]=arr[j][0];
				arr[j][0]=temp1;
				temp2=arr[i][1];
				arr[i][1]=arr[j][1];
				arr[j][1]=temp2;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<2;j++)
		{
			if(arr[i][1]>=arr[i+1][0])
			{
				i=i+1;
				for(k=i;k<n;k++)
				{
					for(l=0;l<2;l++)
					{
						arr[k][l]=arr[k+1][l];
				 	}
				}						
				n--;
				i=i-1;	
			}	
		}
	}
	printf("{");
	for(i=0;i<n;i++)
	{
		printf("{");
		for(j=0;j<2;j++)
		{
			printf("%d",arr[i][j]);
			if(j==0)
				printf(",");
		}
		printf("}");
		if(i<n-1)
			printf(",");
	}
	printf("}");
}
