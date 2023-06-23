#include <stdio.h>
#include <stdlib.h>

typedef int( * compare_func_t)(const void * ,const void * );

void sort_array(int * arr, size_t n, compare_func_t compare) 
{   
    qsort(arr, n, sizeof(int), compare);
}

int ascending_order(const void * a, const void * b) 
{
    const int * ia = (const int * ) a;
    const int * ib = (const int * ) b;
    return ( * ia > * ib) - ( * ia < * ib);
}

int descending_order(const void * a, const void * b) 
{
    const int * ia = (const int * ) a;
    const int * ib = (const int * ) b;
    return ( * ib > * ia) - ( * ib < * ia);
}

int main() {
  int arr[10];
  printf("Enter number real numbers:\n");
  for(int i=0; i<10; i++)
  {
    scanf("%d", &arr[i]);
  }
  size_t n = sizeof(arr) / sizeof(int);
  printf("Original array: ");
  for (size_t i = 0; i < n; i++) 
  {
    printf("%d ", arr[i]);
  }

  printf("\n");
  sort_array(arr, n, ascending_order);
  printf("\nAscending order: ");
  for (size_t i = 0; i < n; i++) 
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  sort_array(arr, n, descending_order);
  printf("\nDescending order: ");
  for (size_t i = 0; i < n; i++) 
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
