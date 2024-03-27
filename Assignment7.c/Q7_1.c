/*
 1. Write a function to accept a 2-D array from the user. Write another function to print the 2-D
    array.
*/

#include<stdio.h>
void accept(int arr1[2][2])
{
  int i,j;

  printf("Enter 2-D array elements:\n");
  for(i=0;i<2;i++)
   {
    for(j=0;j<2;j++)
	{
     scanf("%d",&arr1[i][j]);
	}
   }
}



void print(int arr1[2][2])
{
  int i,j;

  printf("Enter 2-D array elements:\n");
  for(i=0;i<2;i++)
   {
    for(j=0;j<2;j++)
	{
     printf("%d ",arr1[i][j]);
	}
	printf("\n");
   }
}

void accept(int arr2[2][2])
{
  int i,j;

  printf("Enter 2-D array elements:\n");
  for(i=0;i<2;i++)
   {
    for(j=0;j<2;j++)
	{
     scanf("%d",&arr2[i][j]);
	}
   }
}



void print(int arr2[2][2])
{
  int i,j;

  printf("Enter 2-D array elements:\n");
  for(i=0;i<2;i++)
   {
    for(j=0;j<2;j++)
	{
     printf("%d ",arr2[i][j]);
	}
	printf("\n");
   }
}
void add(int arr1[2][2],int arr2[2][2],int c)
{
 int i,j;
 for(i=0;i<2;i++)
 {
   for(j=0;j<2;j++)
   {

   c[i][j]=arr1[2][2]+arr2[2][2];
    printf("%d ",c[i][j]);
   }
   printf("\n");
 }
}


int main()
{
  int arr1[2][2];
  int arr2[2][2];
  int c[2][2];
  accept(arr1);
  print(arr1);
  accept(arr2);
  print(arr2);
  add(arr1,arr2,c);
 return 0;

}


