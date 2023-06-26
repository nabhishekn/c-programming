#include <stdio.h>

#include <stdlib.h>

int main() {
  int n;
  // ptr will point to the base address
  int * p;

  // User input
  printf("Enter your number of elements:");
  scanf("%d", & n);

  // DMA using malloc()
  p = (int * ) malloc(n * sizeof(int));

  // Checking for memory allocation
  if (p == NULL) {
    printf("Error: Unable to allocate specified memory.\n");
    exit(0);
  } 
  else {

    // successful operation
    printf("Memory successfully allocated using malloc.\n");

    printf("Entered number of elements by you: %d\n", n);

    for (int i = 0; i < n; i++) {
      p[i] = i + 1;
    }

    // Print the elements of the array
    printf("The array elements are ");
    for (int i = 0; i < n; i++) {
      printf("%d, ", p[i]);
    }
  }
  free(p);
  return 0;
}