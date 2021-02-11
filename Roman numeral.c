#include<stdio.h>
char * RomanNumeral(char*numbers[],int i);
void main()
{
    char *ones[] = { "", "I","II","III","IV","V","VI","VII","VIII","IX" };
    char *tens[] = { "", "X","XX","XXX","XL","L","LX","LXX","LXXX","XC" };
    char *hundreds[] = {"",  "C","CC","CCC","CD","D","DC","DCC","DCCC","CM" };
    char *thousands[] = {"",  "M","MM","MMM" };
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int o,t,h,th;
    o = n % 10;
    t = (n / 10)%10;
    h = (n / 100)%10;
    th = (n / 1000)%10;
    printf("%s",RomanNumeral(thousands,th));
    printf("%s",RomanNumeral(hundreds,h));
    printf("%s",RomanNumeral(tens,t));
    printf("%s",RomanNumeral(ones,o));
    printf("\n");
}
 char * RomanNumeral(char*numbers[],int i)
 {
     return numbers[i];
 }
