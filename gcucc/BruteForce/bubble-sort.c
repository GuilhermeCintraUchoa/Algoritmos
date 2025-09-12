#include <stdio.h>

int main(void) {
  int A[] = {89, 45, 89, 90, 29, 34, 17};
  int tamanho_lista = sizeof(A)/sizeof(A[0]);

  printf("====================\n");
  printf("LISTA INICIAL:\n");
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
    }
  }

  printf("====================\n");
  printf("LISTA ORDENADA:\n");

  for (int i = 0; i < tamanho_lista; i++){
    printf("%d ", A[i]);
  }
  printf("\n");

  printf("====================\n");

  return 0;
}
