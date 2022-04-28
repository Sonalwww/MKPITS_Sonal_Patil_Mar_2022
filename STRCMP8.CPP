#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char str1[]={"jcet"};
char str2[]={"college"};
int n;
n=strcmp(str1,str2);

if(n==0)
{
printf("data of string are same");
}
{
if(n<0)
printf("str1 is less than str2");
else if(n>0)
printf("str2 is greater than str1");
}
getch();
}