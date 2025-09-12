#include <stdio.h>

int main(void){
  int A[] = {89, 45, 68, 90, 29, 34, 17};

  int index_do_j;
  for (int i = 0; i < 6; i++){
    int min = A[i];

    int indiceJ = 0;
    for (int j = i+1; j < 7; j++){
      if(A[j] < min){
        min = A[j];
        indiceJ = j;
      }
    }

    int tmp = A[i];
    A[i] = A[indiceJ];
    A[indiceJ] = tmp;
    // preciso que no A[i] va o valor de min (que eh o A[j] dps de todos os loops pra achar o menor depois de A[i])
    // e que no A[j] va o valor de A[i]
    // printf("index do j: %d\n", index_do_j);
  }

  for (int h = 0; h < 7; h++){
      printf("A[%d]: %d\n", h, A[h]);
  }
  return 0;
}
