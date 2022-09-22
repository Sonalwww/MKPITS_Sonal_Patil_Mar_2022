#include<stdio.h>
#include<conio.h>
void main()
{
float temp,fahrenheit,kelvin;
printf("enter the temperature");
scanf("%f",&temp);
kelvin=temp+273.15;
printf("kelvin=%f\n",kelvin);
fahrenheit=(temp*9/5)+32;
printf("fahrenheit=%f",fahrenheit);
getch();
}