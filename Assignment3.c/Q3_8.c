/*
 8. Write a program to accept a number and print its prime factors.
*/

#include<stdio.h>
int main()
{
  int i,j,num,isprime;
  printf("enter the number:\n");
  scanf("%d",&num);

  printf("all prime factors of %d is :\n",num);

  for(i=2;i<=num;i++)
   {
    if(num%i==0)
	 {
       isprime=1;
	   for(j=2;j<=i/2;j++)
	   {
        if(i%j==0)
		{
          isprime=0;
		  break;
		}
	  
	   }
  
         if(isprime==1)
          {
            printf("%d  ",i);
          }
       }
	 }
	 return 0;
}


