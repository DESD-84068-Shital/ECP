/*
 2. Write a function to calculate power.
*/

#include<stdio.h>
void powr(int,int);
int main()
{
  int base,index;
  printf("Enter base:\n");
  scanf("%d",&base);

  printf("Enter index:\n");
  scanf("%d",&index);

  powr(base,index);
 
  return 0;
}

void powr(int base,int index)
{
  int p=1;
  for(int i=0;i<index;i++)
  {
    p*=base;
  }
  printf("power=%d",p);

}
