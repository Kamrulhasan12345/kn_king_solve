#include <stdio.h>

int main(void) {
  float x;
  printf("Enter the value of x: ");
  scanf("%f",&x);
  printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6: %f\n",3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6);
}