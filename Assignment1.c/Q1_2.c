/*Write a program to accept a number and print the number in character, decimal, octal and hex
formats.
*/

#include<stdio.h>
int main()
{
int num;
printf("Enter the number:\n");
scanf("%d",&num);
printf("Decimal form of %d is:%d\n",num,num);
printf("Octal form of %d is:%o\n",num,num);
printf("Hexadecimal form of %d is:%x\n",num,num);

return 0;
}
