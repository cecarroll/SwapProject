/***
constant MAX is max length of array
function sort (array):
    create integer variables i and j
    for i from zero to MAX - 1:
        for j from zero to MAX - 1:
            if array[j] > array[j+1]:
                swap array[j] with array[j+1]
                printArray(array)


function swap (array[i], array[j]):



function printValues(array):
    for i from zero to MAX - 1: 
        printf(array[i])



*/


#include <stdio.h>
const int MAX=9;

void printValues(int*);
//void sort(int*);
//void swap(int*, int*);

int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);

  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  //swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  //sort(values);
  //printf("After: \n");
  printValues(values);

  return(0);
} // end main

void printValues(int *a){
    
    for (int i = 0; i < MAX ; i++) {
        printf("%d", a[i]);
    }

    

    return;

} 
