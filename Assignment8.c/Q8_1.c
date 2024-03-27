/*
 1. Declare a structure to store data for student information. The structure contains roll number,
name, marks for students. Write a program to accept information of student from user and print
the same.
*/

#include<stdio.h>
struct student 
{
  int roll_no;
  char name[20];
  float marks;
};

int main()
{
  struct student s;
  scanf("%d %s %f",&s.roll_no,&s.name,&s.marks);

  printf("roll_no: %d\nname: %s\nmarks: %.2f\n",s.roll_no,s.name,s.marks);



}

