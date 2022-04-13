#include <stdio.h>
#include<conio.h>
void main()
{
float num,total=0, avg;
int j, p=0;
printf("Input the first number: ");
scanf("%f", &num);
printf("Input the second number: ");
scanf("%f", &num);
printf("Input the third number: ");
scanf("%f", &num);
printf("Input the fourth number: ");
scanf("%f", &num);
printf("Input the fifth number: ");
scanf("%f", &num);
j=0;
while(j < 5)
{
if(num > 0)
j++;

{
p++;
total += num;
}
}
avg = total/p;
printf("number of positive numbers %d", p);
printf("average value of the positive numbers %f", avg);
getch();
}