#include <stdio.h>

void printar_array(int array[], int tamanho_array);

int main(void){
  int A[] = {89, 45, 68, 90, 29, 34, 17};
  int tamanho = sizeof(A)/sizeof(A[0]);
  int v,j;

  for (int i = 1; i < tamanho; i++){
    printf("i: %d\n", i);

    v = A[i];
    printf("v = A[i]: %d\n", v);

    j = i - 1;
    printf("j = i - 1: %d\n", j);


    printf("j(%d) >= 0 & A[j](%d) > v(%d) ", j, A[j], v);
    while (j >= 0 & A[j] > v){
      printf("SIM! Entao preciso trocar\n");
      printf("Vou dar a A[j+1](%d) o valor de A[j](%d)\n", A[j+1], A[j]);
      A[j+1] = A[j];
      j--;
      printf("E entao temos: ");
      printar_array(A, tamanho);
    }
    printf("NAO! Meu v eh %d; o j eh %d\n", v,j);

    A[j+1] = v;
    printf("A lista apos i = %d ficou: ", i);
    printar_array(A, tamanho);
  }
  printar_array(A, tamanho);
}

void printar_array(int array[], int tamanho_array){
  for (int i = 0; i < tamanho_array; i++){
    printf("%d ", array[i]);
  }
  printf("\n");
}
