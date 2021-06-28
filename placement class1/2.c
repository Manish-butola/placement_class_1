#include <stdio.h>

int remove_val(int* arr, int size, int val) {
  int i, count = 0;
 
  for (i = 0; i < size; i++) {
    if (arr[i + count] == val) count++;
    arr[i] = arr[i+ count];
  }
  
  return size - count;
}

void print_array(int* arr, int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf(" %d", arr[i]);
  }
  printf("\n");
}

int main() {
  int i, n, val, r;
  int arr[128];
  printf("Enter number of elements: ");
  scanf("%d", &n);
  
  /*Taking the array as input from user...*/
  for (i = 0; i < n; i++) {
    printf("Enter %d-th element: ", i);
    scanf("%d", (arr+i));
  }
  
  /*Printing the input array...*/
  printf("The input array: ");
  print_array(arr, n);
  
  printf("Enter a value to remove: ");
  scanf("%d", &val);
  
  r = remove_val(arr, n, val);
  
  /*Printing the array after deletion...*/
  printf("The array after removing %d: ", val);
  print_array(arr, r);
  return 0;
}