//sort the array based upon the prime factors

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,k,a[100],n,b[100],flag,prime,t1,t;
	printf("Enter no of array elements: ");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=2;j<=a[i];j++)
 		{
 	  		if(a[i]%j==0)
	  	    {
	   			prime = 1;
           		for(k=2; k<=j/2; k++)
           		{
                	if(j%k==0)
               	    {
                    	prime = 0;
                    	break;
                	}
            	}
            	if(prime==1)
            	{
                	flag++;
            	}
	  		}	
		}
		b[i]=flag;
		
	}
	for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(b[i]>b[j])
        {
            t1=b[i];
            b[i]=b[j];
            b[j]=t1;
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
        else if(b[i]==b[j])
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
	printf("The sorted array based on prime factors is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	
}
