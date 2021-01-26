//Given an infinite sorted binary array, find the index where the first 1 is present

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[]={0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1};
	int low=0,high=1,mid;
	while(arr[high]==0)
	{
		low=high;
		high=2*high;
	}
	while(low<=high)
	{
	mid=(low+high)/2;
	if(arr[mid]==1 && (mid==0 || arr[mid-1]==0))
		break;
    else if(arr[mid]==1)
		high=mid-1;
	else
		low=mid+1;
	}
	printf("The index where the first 1 found is %d ",mid);
return 0;
}

