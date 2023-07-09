// Julianna Diaz
// COP 3502
// Professor Torosdagli
// 9 July 2023

/* This program bubble sorts a certain list and returns the correct number of swaps needed for each index in the array */

/* Most of Bubble sort code taken from professor's example code*/

#include <stdio.h>
#include <stdlib.h>

/* Function to print an array */
void printArray(int arr[], int size) {
  
  for(int i=0; i < size; i++)
    printf("%d ", arr[i]);
  
  printf("\n");

}

// A function to implement bubble sort
void bubbleSort(int arr[], int n) {
  
  printf("\nUsing Bubble sort\n\n");
  
  int temp;

  for (int i = 0; i < n-1; i++){
    
    printf("Iteration# %d\n",i+1);

    // Variable to count swap count 
    int swap_count = 0;
    for (int j = 0; j < n-i-1; j++){
      if (arr[j] > arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        // Increments counter with each swap
        swap_count++;
      }
      printArray(arr, n);
    }
      // Prints out swaps needed for each index 
      printf("Swaps needed for index %d: %d\n", i, swap_count);
  }
}



// Main program to run all functions above
int main(void) {
  int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
  int n = 9;
  printf("Array before sorting: \n");
  printArray(arr, n);
  bubbleSort(arr, n);
  printArray(arr, n);
  printf("\nSorted array: \n");
  printArray(arr, n);
  return 0;
}
