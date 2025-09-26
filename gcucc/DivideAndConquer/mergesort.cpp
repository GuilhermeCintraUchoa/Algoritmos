#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeSort(vector<int>);

int main(void){
    int n,input;

    cin >> n;

    vector<int> A;
    vector<int> B;
    vector<int> C;


    for(int i = 0; i < n; i++){
        cin >> input;
        A.push_back(input);
    }

    else{
        cout<<A[0]<<"\n";
    }
    
    // for(int i : A){
    //     cout<<i<<" ";
    // }

    // cout<<"\n";
}

vector<int> mergeSort(vector<int>){}