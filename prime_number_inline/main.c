#include <stdio.h>

 // inline function to check if a given integer is prime
static inline int is_Prime(int n) {
  if (n <= 1) {
    return 0;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}
int main() {
  int num;
  printf("Input a positive integer: ");
  scanf("%d", & num);

  if (is_Prime(num)) {
    printf("%d is a prime number.\n", num);
  } else {
    printf("%d is not a prime number.\n", num);
  }
  return 0;
}