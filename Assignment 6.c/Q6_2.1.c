/*
 2. Write a program to simulate the following library function.
     a. size_t strlen(const char* str);
*/



#include<stdio.h>
size_t my_strlen(const char*s)
{
  size_t length=0;
 for(int i=0;s[i]!=0;i++)
  {
    length++;
  }
  return length;

}

int main()
{
  char str[]="DESD course pune";
  

  int length= my_strlen(&str);
  printf("length=%d\n",length);
 return 0;


}
