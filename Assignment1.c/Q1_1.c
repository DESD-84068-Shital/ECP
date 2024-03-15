/* 1. Write a program to Accept two numbers and
      a. find its sum.
      b. find its difference.
      c. find its product.
*/

#include<stdio.h>
int main()
{
 int num1,num2;
 printf("Enter first number: ");
 scanf("%d",&num1);
 printf("Enter second number: ");
 scanf("%d",&num2);

 printf("Addition of two numbers:\n");
 int add=num1+num2;
 printf("Addition=%d\n",add);

 printf("Subtraction of two numbers:\n");
 int sub=num1-num2;
 printf("Subtraction=%d\n",sub);

 printf("Multiplication of two numbers:\n");
 int mul=num1*num2;
 printf("Multiplication=%d\n",mul);

 return 0;
 }
