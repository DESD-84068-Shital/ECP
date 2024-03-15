#include<stdio.h>
int main()
{
 int choice;
 int num1,num2;
 printf("enter first number:\n");
 scanf("%d",&num1);
 printf("enter second number:\n");
 scanf("%d",&num2);

 repeat:
printf("0.EXIT\n 1.ADDITION\n 2.SUBTRACTION\n 3.MULTIPLICATION\n 4.DIVISION\n");
scanf("%d",&choice);
 switch(choice)
  {
    case 0:
	printf("Bye.....\n");
	break;

	case 1:
	int sum=num1+num2;
	printf("Addition of two numbers:%d\n",sum);
	break;

	case 2:
	int sub=num1-num2;
	printf("subtraction of two numbers:%d\n",sub);
	break;

	case 3:
	int mul=num1*num2;
	printf("multiplication of two numbers:%d\n",mul);
	break;

    case 4:
	if(num2==0)
	break;
	else
	{
	float div=num1/num2;
	printf("division of two numbers:%.1f\n",div);
	}
goto repeat;




  }




}
