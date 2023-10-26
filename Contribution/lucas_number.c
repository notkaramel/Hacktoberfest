#include<stdio.h>

int lucas(int n) {
  if (n == 0) {
    return 2;
  } else if (n == 1) {
    return 1;
  } else {
    return lucas(n - 2) + lucas(n - 1);
  }
}

int main() {
  int n = 10;
  printf("The %dth Lucas number is %d\n", n, lucas(n));
  return 0;
}