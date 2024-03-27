#include<stdio.h>
#include<string.h>
int main()
{
  char str[]="DESD-Course pune";
  printf("str: %s",str);
  int length=strlen(str);
  printf("%d\n",length);

printf("--------------------------\n");
  char str2[20];
  strcpy(str2,str);
  printf("str2: %s\n",str2);

printf("---------------------------\n");
  char str3[]="at sunbeam";
  strcat(str2,str3);
  printf("str2: %s\n",str2);

printf("---------------------------\n");
 char str4[]="shital";
 char str5[]="Shital";
 int result=strcmp(str4,str5);
 printf("result: %d\n",result);

printf("----------------------------\n");
 strrev(atr5);
 printf("str5: %s\n",strrev);




}
