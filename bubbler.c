
int keepGoing = 1;
#include <stdio.h>
const int MAX=9;

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);

  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);
  printf("\n");
  return(0);
} // end main

void printValues(int *a){
    printf("["); 
    for (int i = 0; i < MAX ; i++) {
        printf("%d ", a[i]);
    }
    printf("]");
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
          printValues(a);
          printf("\n");
    
      }
    }
  }
}
