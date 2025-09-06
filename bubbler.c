/***
constant MAX is max length of array
function sort (array):
    create integer variables i and j
    for i from zero to MAX - 1:
        for j from zero to MAX - 1:
            if array[j] > array[j+1]:
                swap array[j] with array[j+1]
                printArray(array)



Here, I am taking in 2 pointers to addresses of the values of array:
    I can change each pointer to change the value at their addresses. If I change one pointer*, I change teh value at the address&.
    If I change the pointer, it doesnt change the value at the &address. If I make arrayi = arrayj&, then I can still make arrayi& = arrayj


function swap (array[i], array[j]):
I was researching a lot if there was a way to do this without a temp variable, but alas
int temp
temp equals a 
a equals b
b equals temp *remember we will have to assign pointers that go back to the address to get the desired changes



function printValues(array):
    for i from zero to MAX - 1: 
        printf(array[i])







function sort(array)
while keepGoing = True{
    keepGoing = False
    for i in max-1
        if array[i] > array[i+1]
            swap[array[i], array[i+1]]
            keepGoing = True
}


*/


#include <stdio.h>
const int MAX=9;
int keepGoing = 1;

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);
/*
  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);
*/
  sort(values);
  printf("After: \n");
  printValues(values);
  printf("\n");
  return(0);
} // end main

void printValues(int *a){
    
    for (int i = 0; i < MAX ; i++) {
        printf("%d", a[i]);
    }

    

    return;

} 

void swap(int *a, int *b){
  int temp = *b;
  *b  = *a;
  *a = temp;


}

void sort(int *a){
  
  while(keepGoing){
    keepGoing = 0;
      for (int i = 0; i< MAX - 1;i++){
        if( *(a+i)>*(a+i+1)){
          swap((a+i),(a+i+1));
          keepGoing = 1;
      	  printf("After: \n");
          printValues(a);
          printf("\n");
    
      }
    }
  }
}
