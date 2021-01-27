#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 0,n,count=0,start,end; 
    char str[50],result_str[50]; 
    printf("Enter the number: ");
    scanf("%d",&n);
    while (n > 0) 
	{
        int rem = n % 26;
        if (rem == 0) {
            str[i++] = 'Z';
            n = (n / 26) - 1;
        }
        else 
        {
            str[i++] = (rem - 1) + 'A';
            n = n / 26;
        }
    }
    str[i] = '\0';
    for(i=0 ; str[i]!='\0'; i++)
		count++;

   end = count - 1;
   for (start=0; start<count; start++) 
   {
      result_str[start] = str[end];
      end--;
   }
   result_str[start] = '\0';
    printf("%s",result_str); 
    return;
}
