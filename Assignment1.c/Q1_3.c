   /*
    3. Print the ASCII value of user entered character in decimal, hex, octal format and also print the
       character for user entered ASCII value.
   */


   #include<stdio.h>
   int main()
   {
       char ch;
       printf("Enter the character:\n");
       scanf("%c",&ch);
	   printf("ASCII value of entered character is:%d\n",ch);
       printf("ASCII value of entered character in decimal form is:%d\n",ch);
       
       printf("ASCII value of entered character in octal form is:%o\n",ch);

       printf("ASCII value of entered character in hexa-decimal form is:%x\n",ch);
      
     return 0;




}
