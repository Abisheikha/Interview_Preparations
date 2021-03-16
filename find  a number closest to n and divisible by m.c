/*Given two numbers n,m find  a number closest to n and divisible by m*/

#include<stdio.h>
int main()
{
	int n,m,i,j,res,count=0;
	printf("Enter n and m:\n");
	scanf("%d%d",&n,&m);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
			count++;
	}
	if(count==1)
	{
		printf("The given number n should not be a prime number.");
		return 0;
	}
	i=n-1;
	j=n+1;
	while(i>n-4 && j<n+4)
	{
		if(i%m==0)
		{
			res=i;
			break;
		}
		if(j%m==0)
		{
			res=j;
			break;
		}
		i--;
		j++;
	}
	printf("The number is %d",res); 
	
	return 0;
}
