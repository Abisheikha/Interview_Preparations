#include<stdio.h>
#include<stdlib.h>
void main()
{
	char str1[50],str2[50],char1,char2;
	int index1=0,index2=0,edits=0,len1,len2,len_diff;
	printf("Enter the two strings:\n");
	gets(str1);
	gets(str2);
	len1=strlen(str1);
	len2=strlen(str2);
	len_diff=len1-len2;
	if(len_diff>1)
		printf("False");
	while(len1>index1 && len2>index2)
	{
		char1=str1[index1];
		char2=str2[index2];
		if(char1==char2)
		{
			index1++;
			index2++;
		}
		else if(len_diff==1)
		{
			if(len1>len2)
				index1++;
			else
				index2++;
			edits++;
		}
		else
		{
			index1++;
			index2++;
			edits++;
		}
	}
	if(edits>=2)
		printf("False");
	else
		printf("True");
}
