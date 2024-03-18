/*
 7. Write a program to accept a number and print unique pairs of numbers such that multiplication of
the pair is given number.
*/


#include<stdio.h>
int main()
{
  int num,i;
  printf("Enter the number: \n");
  scanf("%d",&num);

  for(i=1;i<=num;i++)
   {
    if(num%i==0)
	 {
       if(i<=(num/i))
	   printf("%d*%d=%d\n",i,num/i,num);
	 }

   }


}
