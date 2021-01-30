//Given two strings, return minimum number of modifications to convert one string into an anagram of others.

#include<stdio.h>
#include<stdlib.h>
#define ALP 26
void main()
{
	int countstr1[ALP]={0},countstr2[ALP]={0},a[ALP]={0},b[ALP]={0},min_modification=0,i,len;
	char str1[50],str2[50];
	printf("Enter two strings:\n");
	gets(str1);
	gets(str2);
	len=strlen(str1);
	for(i=0;i<len;i++)
	{
		countstr1[str1[i] - 'A']++;
		countstr2[str2[i] - 'A']++;
	}
	for(i=0;i<ALP;i++)
	{
		if(countstr1[i]>countstr2[i])
			a[i]=a[i]+(countstr1[i]-countstr2[i]);
		else if(countstr1[i]<countstr2[i])
			b[i]=b[i]+(countstr2[i]-countstr1[i]);
		min_modification+=abs(countstr2[i]-countstr1[i]);
	}
	printf("Minimum no of modifications is %d",min_modification/2);
	
}
