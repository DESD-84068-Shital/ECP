/*
 5. Write a program to find factorial of given number.Input: 5
   Output: 5 * 4 * 3 * 2 * 1 = 120
*/

#include<stdio.h>
int main()
{
  int num,fact=1;
  printf("Enter the number:\n");
  scanf("%d",&num);
  int i=num;
  while(i==1)
  {
    fact*=i;
    printf("%d* ",i);
	i--;
}
	printf("factorial=%d\n",fact);

}



