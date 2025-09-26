#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main(void){
  vector<int> A;
  int input;

  for(int i = 0; i < 6; i++){
    cin >> input;
    A.push_back(input);
  }

  int v,j;

  for (int i = 1; i < A.size(); i++){
    v = A[i];
    j = i - 1;

    while (j >= 0 && A[j] > v){
      A[j+1] = A[j];
      j--;
      for(int w : A){
          cout << w << " ";
      }
      cout << "\n";
    }

    cout << "Botou o v no lugar dele, \n";
    A[j+1] = v;

    cout << "Apos i=" << i << ": ";

    for(int w : A){
      cout << w << " ";
    }
    cout << "\n";
  }

  for(int i : A){
    cout << i << " ";
  }

  cout << "\n";

  //Exemplo:
  //A = [89, 4, 1, 4, 3, 20]
  //89 4 1 4 3 20
  //89 | 4* 1 4 3 20
    //89 | 89 1 4 3 20
    //4 | 89 1 4 3 20
  //4 89 1 4 3 20
    //4 89 | 89 4 3 20
  //   4 4 | 89 4 3 20
  //   1 4 | 89 4 3 20
  // 1 4 89 | 4 3 20
  //   1 4 89 | 89 3 20
  //   1 4 4 | 89 3 20
  // 1 4 4 89 | 3 20
  //   1 4 4 89 | 89 20
  //   1 4 4 4 | 89 20
  //   1 3 4 4 | 89 20
  // 1 3 4 4 89 | 20
  //   1 3 4 4 89 | 89
  //   1 3 4 4 20 | 89
  // 1 3 4 4 20 89


  return 0;
}

