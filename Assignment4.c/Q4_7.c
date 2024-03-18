/* 7. Write a function to print given number of terms of Fibonacci series. */

#include <stdio.h> 
void printPascal(int n) 
{ 
    for (int line = 1; line <= n; line++) { 
        for (int space = 1; space <= n - line; space++) 
            printf("  "); 
        int coef = 1; 
        for (int i = 1; i <= line; i++) { 
            printf("%4d", coef); 
            coef = coef * (line - i) / i; 
        } 
        printf("\n"); 
    } 
} 
  
int main() 
{ 
    int n ;
    printf("Enter the NO:");
    scanf("%d",&n); 
    printPascal(n); 
    return 0; 
}
