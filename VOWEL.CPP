#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
int i,j,count;
char s[1000];
char check[]={'a','e','i','o','u','\0'};
scanf("%s",&s);
for(i=0;i<5;i++)
{
count=0;
for(j=0;j<strlen(s);j++)
{
if(s[j]==check[i])
{
count++;
}
}
printf("%c=%d",check[i],count);
}
getch();
}