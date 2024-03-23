/*
 5. Write a function to calculate maximum and minimum of the array elements.
*/


#include<stdio.h>
int main()
{
  int arr[20];
  int i,min,max,n;

 printf("find max and min element in an array:\n");
 printf("enter the number of elements stored in the array:\n");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }

 for(i=0;i<n;i++)
 {
  printf("%d",arr[i]);
 }

max=arr[0];
min=arr[0];

for(i=1;i<n;i++)
{
  if(arr[i]>max)
  {
   max=arr[i];
  }

  if(arr[i]<min)
  {
   min=arr[i];
  }
}
printf("maximum number:%d\n",max);
printf("minimum number:%d\n",min);



}







