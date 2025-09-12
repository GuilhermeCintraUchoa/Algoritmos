// ACHO QUE FIZ UM BUBBLE SORT SEM QUERER
#include <stdio.h>

void print_array_atual(int array[], int tamanho_da_array);

int main(void) {

  int A[] = {89, 45, 89, 90, 29, 34, 17};
  int size_of_array = sizeof(A);
  int size_of_int = sizeof(int);
  int tamanho = size_of_array/size_of_int;

  for (int i = 0; i < tamanho; i++){
      printf("%d ", *(A+i));
  }
  printf("\n");

  for (int i = 0; i < tamanho-1; i++){
    for (int j = i+1; j < tamanho; j++){
      int tmp;
      if(A[i] > A[j]){
        //swap
        tmp = A[i];
        A[i] = A[j];
        A[j] = tmp;
      }
    }
    print_array_atual(A, tamanho);
    
  }
  // for (int i = 0; i < tamanho; i++){
    // printf("A[%d]: %d\n", i, A[i]);
  // }
}

void print_array_atual(int array[], int tamanho_da_array){
  for (int i = 0; i < tamanho_da_array; i++){
    printf("%d ", *(array+i));
  }
  printf("\n");
}
