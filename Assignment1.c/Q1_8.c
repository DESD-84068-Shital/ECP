/*
8. Write a program to accept three integer numbers and find its average.
*/

#include<stdio.h>
int main()
{
   int num1,num2,num3,Avg;
   printf("Enter first number:\n");
   scanf("%d",&num1);
   printf("Enter second number:\n");
   scanf("%d",&num2);
   printf("Enter third number:\n");
   scanf("%d",&num3);

   Avg=(num1+num2+num3)/3;
   printf("Average=%d\n",Avg);

   return 0;


}
