#include <iostream>
#include <vector>

using namespace std;

void mergeSort(vector<int>& A, int l, int r);
void merge(vector<int>& A, int l, int r);

int main(void){
    vector<int> A = {5, 2, 1, 7, 0};

    mergeSort(A, 0, 4);

    
    for(int p : A){
        cout << p << " ";
    }
    cout << "\n";

}

void mergeSort(vector<int>& A, int l, int r){
    if(l < r){ //preciso checar se a array nao eh unitaria. Se for unitaria esta ordenada por definicao.
        int m = (l+r)/2;

        mergeSort(A, l, m);
        mergeSort(A, m+1, r);
        merge(A, l, r);
    }
}

void merge(vector<int>& A, int l, int r){
    vector<int> temp(A.size());

    for(int i = l; i <= r; i++){
        temp[i] = A[i];
    }

    int m = (l+r)/2;

    int i1 = l;
    int i2 = m+1;

    for(int curr = l; curr <= r; curr++){
        //primeiro vou fazer as checagens se todos de alguma subarray ja foram copiados
        //para isso vejo se alguma das variaveis auxiliares ja sairam de seu escopo designado
        if(i2 > r){
            //eh pq copiou tudo de i2
            A[curr] = temp[i1];
            i1++;
        }

        else if(i1 > m){
            //eh pq copiou tudo de i1
            A[curr] = temp[i2];
            i2++;
        }

        else if(temp[i1] <= temp[i2]){
            A[curr] = temp[i1];
            i1++;
        }

        else{
            A[curr] = temp[i2];
            i2++;
        }
    }
}
