/*
  1. Write a program to accept marks of five subjects, calculate its total and average.
*/


#include<stdio.h>
int main()
{

  int marks[5];
  int sum=0,avg=0;
  int i;
  printf("enter the marks of 5 subjects:\n");
  for(i=0;i<5;i++)
  {
   scanf("%*c%d",marks[i]);
   if(marks[i]>20)
    return;
  }

  printf("the marks are:\n");
  for(i=0;i<5;i++)
  {
   printf("arr[i]=%d\n",marks[i]);
  }

  printf("total marks:\n");
  for(i=0;i<5;i++)
  {
   sum+=marks[i];
  }
  printf("sum=%d\n",sum);





}
