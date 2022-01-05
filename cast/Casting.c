#include<stdio.h>

int main() {
  char targetChar;
  int sourceInt = 99;
  double sourceDouble = 55.67;

  // Cast here
  targetChar = sourceDouble;

  printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, targetChar);  
  printf("targetChar %c\n", 55);
  return 0;
}