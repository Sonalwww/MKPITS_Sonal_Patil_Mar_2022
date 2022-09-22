#include<stdio.h>
#include<conio.h>

void main()
{
int i,n,sum=0;
   printf("Input Value of terms");
   scanf("%d",&n);
   printf("The first %d natural numbers are:\n",n);
    i=1;
   while(i<=n)
   {
     printf("%d ",i);
     sum+=i;
     i++;
     }

   printf("\nThe Sum of natural numbers upto %d terms : %d \n",n,sum);

}