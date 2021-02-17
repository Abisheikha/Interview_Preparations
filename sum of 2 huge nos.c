#include<stdio.h>
void main()
{
	int arr1[50],i,a,b,arr2[50],result[i],count=0;
	long long int sum1=0,sum2=0,res,temp,mul=1;
	printf("Enter number of digits of first and second array: ");
	scanf("%d%d",&a,&b);
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr1[i]);		
	}
	for(i=0;i<b;i++)
	{
		scanf("%d",&arr2[i]);		
	}
	for(i=0;i<a;i++)
	{
		sum1=(sum1*10)+arr1[i];
	}
	for(i=0;i<b;i++)
	{
		sum2=(sum2*10)+arr2[i];
	}
	res=sum1+sum2;
//	printf("%lld ",res);
	temp=res;
	temp=temp/10;
	while(temp!=0)
	{
		temp=temp/10;
		mul=mul*10;		
	}
	i=0;
	while(res!=0)
	{
		temp=res/mul;
		res=res%mul;
		result[i]=temp;
		mul=mul/10;
		printf("%d ",result[i]);
		i++;
	}
  	for(i=0;i<count;i++)
  	{
		printf("%d ",result[i]);
  	}
}
