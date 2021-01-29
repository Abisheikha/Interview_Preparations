//Given a string, Check if it is a palindrome by ignoring spaces.

#include<stdio.h>
#include<stdlib.h>
void main()
{
	char str[50];
	int i,len,start,end;
	printf("Enter the string:\n");
	scanf("%[^\n]",str);
	len=strlen(str);
//	strlwr(str);
	for(i=0;i<len;i++)
	{
		if(str[i]>=65 && str[i]<=90 )
			str[i]=str[i]+32;
	}
	str[i+1]='\0';
	start=0;
	end=len;
	while(start<=end)
	{
		if(!(str[start]>= 'a' && str[start]<='z') && !(str[start]>= '0' && str[start]<='9'))
			start++;
		else if(!(str[end]>='a' && str[end]<='z') && !(str[end]>= '0' && str[end]<='9'))
			end--;
		else if(str[start]==str[end])
		{
			start++;
			end--;
		}
		else
		{
		    printf("The given string is not a palindrome..");
		    exit(0);
		}	
	}
	printf("The given string is a palindrome..");
}
