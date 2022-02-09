/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  int distance;
  float amount;
// Get the distance travelled from the user.
  printf("Enter the distance travelled: ");
  scanf("%d", &distance);
// If distance travelled is less than or equal to 30. Calculating and printing the amount.
  if(distance<=30)
  {
    amount = (float)distance * 50.0;
    printf("Amount = %.2f", amount);
  }
// If distance travelled is more than 30. Calculating and printing the amount.
  else
  {
    amount = (float)distance * 30.0 + (distance - 30)*40;
    printf("Amount = %.2f", amount);
  }
  return 0;
}
