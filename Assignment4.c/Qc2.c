/*
 8. Write a function to swap two numbers.
*/



#include<stdio.h>
void swap_numbers(int* ,int*);
int main()
{
  int num1,num2;
  printf("Enter num1:\n");
  scanf("%d",&num1);

  printf("Enter num2:\n");
  scanf("%d",&num2);

  printf("Before swap: num1=%d num2=%d\n",num1,num2);

  swap_numbers(&num1,&num2);

  printf("After swap: num1=%d num2=%d\n",num1,num2);
  return 0;
}

void swap_numbers(int *pnum1,int *pnum2)
{
  int temp=*pnum1;
  *pnum1=*pnum2;
  *pnum2=temp;
}
