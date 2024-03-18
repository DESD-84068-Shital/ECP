/*
 1. Write a function to calculate factorial of a given number.
*/

#include<stdio.h>
void fact(int);
int main()
{
int num;
printf("Enter the number:\n");
scanf("%d",&num);

 fact(num);

}

void fact(int num)
{
  int fact=1;
  for(int i=1;i<=num;i++)
   {
     fact*=i;
   }
   printf("factorial=%d",fact);
}

