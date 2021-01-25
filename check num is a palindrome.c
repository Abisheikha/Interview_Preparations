//check if a number is a palindrome 

#include<stdio.h>
void main()
{
	int i,number,sum=0,temp,rem;
	printf("Enter number to check: ");
	scanf("%d",&number);
	temp=number;
	while(number!=0)
	{
		rem=number%10;
		sum=(sum*10)+rem;
		number=number/10;
	}
	if(sum==temp)
		printf("The given number %d is a palindrome number",temp);
	else
		printf("The given number %d is a not a palindrome number",temp);
}
