#include <stdio.h>

#define M_PI 3.14159265

int main(void) {
  float r=10.0f, v;
  v = 4.0f/3.0f * M_PI * r * r * r;
  printf("The volume of a sphere with 10-meter radius is: %f cc\n",v);
}