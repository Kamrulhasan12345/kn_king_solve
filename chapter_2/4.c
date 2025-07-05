#include <stdio.h>

int main(void) {
  float val;
  printf("Enter an amount: ");
  scanf("%f",&val);
  printf("With tax added: $%.2f\n",val+val*5.0f/100.0f);
}