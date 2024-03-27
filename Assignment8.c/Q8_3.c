/*
3. Write a function to accept array of student’s information from the user. Write another function
  to print the array student’s information.
*/

#include<stdio.h>
typedef struct strudent
{
 int roll_no;
 char name[20];
 float marks;
}stud_t;

void accept(stud_t *s);
void print(stud_t *s);

int main()
{
 stud_t s1;
 accept(&s1);
 print(&s1);
 return 0;

}

//printf("take student date:\n");
void accept(stud_t *s)
{
 int i;
  for(i=0;i<3;i++)
  {
   scanf("%d %*c%s %f",&s->roll_no,&s->name,&s->marks);
  }
}

//printf("student data:\n");
void print(stud_t *s)
{
 int i;
 for(i=0;i<3;i++)
 {
  printf("roll_no=%d\n  name=%s\n  marks=%.2f\n",s->roll_no,s->name,s->marks);
 }
// printf("\n");

}
