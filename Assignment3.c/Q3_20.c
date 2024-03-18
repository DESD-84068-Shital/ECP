/*
 20. Write a program to display
   a. Prime numbers between 1 to 100
   b. Armstrong Numbers between 1 to 500
*/


#include<stdio.h>
int main()

int isprime(int num)
{
 if(num<=1)
 {
  return 0;
 }

 for(int i=2;i<=sqrt(num);i++)
  {
   if(num%i==0)
     return 0;
  }
 return 1;
}

int isArmstrong(int num)
{
 int originalNum,remainder,result=0,n=0;
 originalNum=num;

 while(originalNum!=0)
 {
  originalNum/=10;
  ++n;
 }
}

originalNum=num;

while(originalNum!=0)
{
  remainder=originalNum%10;
  result+=pow(remainder,n);
  originalNum/=10;
}

if(result==num)
{
 return 1;
}
 return 0;
}

int main
{
printf("prime number between 1 to 100:\n");
for(int i=1;i<=100;i++)
 {
  if(isPrime(i))
  {
    printf("%d",i);
  }
 }
printf("\n");

printf("\nArmstrong numbers between 1 to 500:\n");
 for(int i=1;i<=500;i++)
  {
   if(isArmstrong(i))
   {
    printf("%d",i);
   }
  }
printf("\n");
return 0;
}
