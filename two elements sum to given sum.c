#include <stdio.h>
int main()
{
	int arr[50],sum,n,low=0,high,i,j,temp;
	printf("Enter no elements in an array: ");
	scanf("%d",&n);
	printf("Enter sum: ");
	scanf("%d",&sum);
	printf("Enter the elements:\n");
	for (i=0;i<n;i++) 
	{
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
    high = n - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == sum)
        {
            printf("The two elements that sum to %d are %d and %d \n",sum,arr[low],arr[high]);
        }
        if(arr[low]+arr[high]<sum)
    		low++;
    	else
    		high--;
    }
}
 
