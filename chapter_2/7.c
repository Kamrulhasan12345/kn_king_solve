#include <stdio.h>

int main(void) {
  int amount;
  printf("Enter a dollar amount: ");
  scanf("%d",&amount);
  printf("\n");
  printf("$20 bills: %d\n",amount/20);
  printf("$10 bills: %d\n",amount%20/10);
  printf(" $5 bills: %d\n",amount%10/5);
  printf(" $1 bills: %d\n",amount%5/1);
}