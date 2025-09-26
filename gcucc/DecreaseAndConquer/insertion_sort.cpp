#include <vector>
#include <iostream>

using namespace std;

int main(void){
    int nElementos;
    int input;
    vector<int> A;

    cin >> nElementos;

    for(int n = 0; n < nElementos; n++){
        cin >> input; 
        A.push_back(input);
    }

    int v,j;

    for (int i = 1; i < nElementos; i++){
        v = A[i];
        j = i - 1;

        while(j >= 0 && A[j] > v){
            A[j+1] = A[j];
            j--;
        }

        A[j+1] = v;
    }

    for(int p = 0; p < nElementos; p++){
        cout << A[p] << " ";
    }

    cout << "\n";
}