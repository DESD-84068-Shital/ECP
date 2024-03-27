/*
 2. Write a program to simulate the following library function.
     b. char* strcpy(char *dest, const char *src);
*/


#include<stdio.h>
#include<string.h>
char *strcpy(char *dest,const char *src)
{
  int i;
  for(;src[i]!='\0';i++)
  {
   dest[i]=src[i];
  }
  dest[i]='\0';
 // printf("dest: %s\n",dest);
  return dest;

}



int main()
{
  char str1[]="DESD";
  char str2[]="DBDA";
 char s= strcpy(&str1,&str2);
  printf("s:%s\n",s);
}
