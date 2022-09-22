#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
printf("any n no");
scanf("%d",&n);
i=1;
while(i<=n)
{
if(i%2==0)
printf("no is even %d\n",i);
else
printf("no is odd %d\n",i);
i++;
}
getch();
}