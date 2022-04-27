#include<stdio.h>
#include<conio.h>
void main()
{
float s=0;
int i;
for(i=1;i<=50;i++)
{
   s += (float)1/i;

}
printf("value of s %f",s);
getch();
}