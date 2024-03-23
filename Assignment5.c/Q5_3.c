/*
 3. Write a function to reverse the array elements.
*/


#include<stdio.h>

//printf("enter array elements:\n");
void accept_arr(int arr[5])
{
  for(int i=0;i<5;i++)
  {
   scanf("%d",&arr[i]);
  }
  printf("\n");
}

//printf("array elements:\n");
void print_arr(int arr[5])
{
  for(int i=0;i<5;i++)
  {
   printf("%d ",arr[i]);
  }
  printf("\n");
}

//printf("reverse:\n");
void reverse_arr(int arr[5])
{
 for(int i=4;i>=0;i--)
 {
  printf("%d ",arr[i]);
 }

}

int main()
{
int arr[5];
accept_arr(arr);
print_arr(arr);
reverse_arr(arr);
return 0;

}
