/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int number, total=0, i=0;
// Get number from the user.
  printf("Enter a number: ");
  scanf("%d", &number);
// Use for loop to add the numbers until the total is derived from the previously entered number.
  for(i=0; i<=number; i++)
  {
    total = total + i;
  }
// print the total.
  printf("sum = %d", total);
  return 0;
}

