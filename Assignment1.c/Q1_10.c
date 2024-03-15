/*
10. Write a program to calculate Area and Perimeter of Triangle for given length of three sides of
triangle. Use sqrt() function from math.h to calculate square root.
Perimeter = a + b + c␎ ␏ ␐ ␏ ␑
Area = ␒␓ ␆ ␇␓ ␎ ␆ ␇␓ ␐ ␆ ␇␓ ␑
Test the program using values 3,4,5 and 1, 2, 3 and 1, 2, 4 for a, b, c. Observe the results.
*/

#include<stdio.h>
#include<math.h>
int main()
{
  int perimeter,a,b,c;
  float s,Area;
  printf("Enter the length of three sides of triangle:\n"); 
  scanf("%d%d%d",&a,&b,&c);

  perimeter=a+b+c;
    printf("perimeter:%d\n",perimeter);

  s=(a+b+c)/2;
  printf("s:%f\n",s);

  Area=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("Area:%f",Area);

  return 0;

}
