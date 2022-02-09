/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2, total;
  float average;
//Get the marks of the subjects from the user
  printf("Enter marks of subject 01: ");
  scanf("%d", &mark1);

  printf("Enter marks of subject 02: ");
  scanf("%d", &mark2);
//calculating the total and average marks
  total = mark1 + mark2;
  average = (float)total/2;
// displaying total and average
  printf("Total marks = %d\n", total);
  printf("Average = %.2f\n", average);

  return 0;
}

