//largest product of three numbers

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,a[100],n,temp,product,product1;
	printf("Enter no of array elements: ");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		product=a[0]*a[1]*a[n-1];
		product1=a[n-3]*a[n-2]*a[n-1];
	}
	if(product<product1)
		{
			printf("The largest product is %d",product1);
		}
		else
		{
			printf("The largest product is %d",product);
		}
	
	
}
