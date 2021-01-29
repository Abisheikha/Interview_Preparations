//Write a program to move all the zeros to the beginning

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int arr[50],i,res[50],count=0,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
			scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
			if(arr[i]==0)
			{
				res[count++]=arr[i];
			}
	}
	
	for(i=0;i<n;i++)
	{
			if(arr[i]!=0)
			{
				res[count++]=arr[i];
			}
	}
	printf("After moving all zeros to the beginning:\n");
	for(i=0;i<n;i++)
	{
			printf("%d ",res[i]);
	}
}
	
