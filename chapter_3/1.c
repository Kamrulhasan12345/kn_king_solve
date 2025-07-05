#include <stdio.h>

int main(void) {
  int y,m,d;
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d",&m,&d,&y);
  printf("You entered the date: %04d%02d%02d\n",y,m,d);
}