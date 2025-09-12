#include <stdio.h>

void print_array_atual(int array[], int tamanho_da_array);

int main(void) {
  int A[] = {89, 45, 68, 90, 29, 34, 17};
  int tamanho_lista = sizeof(A)/sizeof(A[0]);
  //quero que se o elemento da frente for maior que o presente, troque, e repita ate o fim do ciclo desse elemento
  for (int i = 0; i < tamanho_lista; i++){
    printf("%d ", A[i]);
  }

  printf("\n");

  for (int i = 0; i < tamanho_lista - 1; i++){
    int tmp;
    for (int j = 1; j < tamanho_lista - i; j++){
      if(A[j-1] > A[j]){
        tmp = A[j-1];
        A[j-1] = A[j];
        A[j] = tmp;
      }
      for (int i = 0; i < tamanho_lista; i++){
        if(A[i] == tmp){
          printf("*");
        }
        printf("%d ", A[i]);
      }
      printf("\n");
    }

  }


  for (int i = 0; i < tamanho_lista; i++){
    printf("A[%d]: %d ", i, A[i]);
  }
  printf("\n");

  return 0;
}
