/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {int number1,number 2;
            float avg;
            printf("Enter the first number");
            scanf("%d", &number1);
            
            printf("Enter the second number");
            scanf("%d", &number2);
            
            avg = (number1 + number2)/2.0;
            
            printf("Average is %2f" ,avg);
   
  
  return 0;
}

