//Given a set of points find the one with the shortest distance from the origin

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int arr[50][10],i,j,n,temp,res[50],temp1,temp2;
	printf("Enter the number of points:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		res[i]=(arr[i][0]*arr[i][0])+(arr[i][1]*arr[i][1]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(res[i]>res[j])
			{
				temp=res[i];
				res[i]=res[j];
				res[j]=temp;
				temp1=arr[i][0];
				arr[i][0]=arr[j][0];
				arr[j][0]=temp1;
				temp2=arr[i][1];
				arr[i][1]=arr[j][1];
				arr[j][1]=temp2;
			}
		}
	}
	printf("The shortest distance from the point (%d,%d) origin is: %d",arr[0][0],arr[0][1],res[0]);
}
	
	
