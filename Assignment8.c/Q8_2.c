/*
 2. Write a function to accept student information from the user. Write another function to print
   student’s information. Re-use these functions in rest of the assignments wherever required.
*/


#include<stdio.h>
typedef struct student
{
  int roll_no;
  char name[20];
  float marks;
}stud_t;

void accept_marks(stud_t *s);
void print_marks(stud_t *s);

int main()
{
  stud_t s1;
  accept_marks(&s1);
  print_marks(&s1);
return 0;
}

void accept_marks(stud_t *s)
{
 scanf("%d %s %f",&s->roll_no,&s->name,&s->marks);
}


void print_marks(stud_t *s)
{
 printf("roll_no=%d\nname=%s\n marks=%.2f",s->roll_no,s->name,s->marks);
}

