#include <stdio.h>
int main(int argc, char const *argv[]) {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("celsius\tfahr\n");
  celsius = lower;
  while (celsius <= upper) {
    fahr = (9.0 / 5.0) * celsius + 32;
    printf("%3.1f\t%6.1f\n", celsius, fahr);
    celsius += step;
  }
  return 0;
}
