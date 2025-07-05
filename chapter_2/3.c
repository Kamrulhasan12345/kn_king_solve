#include <stdio.h>

#define M_PI 3.14159265

int main(void) {
  float r, v;
  printf("Enter the radius of the sphere you find to compute: ");
  scanf("%f",&r);
  v = 4.0f/3.0f * M_PI * r * r * r;
  printf("The volume of a sphere with %g-meter radius is: %f cc\n",r,v);
}