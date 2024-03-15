#include<stdio.h>
int main()
{
  int num,rem=1,rev=0;
 
 scanf("%d",&num);
 int temp=num;
 while(num!=0)
  {
   rem=num%10;
   rev=rev*10+rem;
   num=num/10;
  }
  printf("reverse=%d\n",rev);

  if(rev==temp)
  printf("palindrome\n");
  else
  printf("not palindrome");




}
