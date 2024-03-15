/*
9. Write a program to convert temperature in Celsius to Fahrenheit and vice versa.
*/

#include<stdio.h>
int main()
{
   float Fahrenheit,celcius;
   printf("Enter the temperature in fahrenheit:\n");
   scanf("%f",&Fahrenheit);
  
   celcius=(Fahrenheit-32)*5/9;
   printf("%.2f Farenheit=%.2f celcius\n",Fahrenheit,celcius);
 
  printf("enter the temperature in celcius:\n");
  scanf("%f",&celcius);

  Fahrenheit=(celcius-32)*5/9;
  printf("%.2f celcius=%.2f Fahrenheit\n",celcius,Fahrenheit);
}
