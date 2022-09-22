#include<stdio.h>
#include<conio.h>
void fun();
void main()
{
fun();

}
void fun()
{
int i=1;
printf("%d",i);
i++;
fun();
getch();
}