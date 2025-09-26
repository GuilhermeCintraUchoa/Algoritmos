#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(void){
  int n;

  cin >> n;

  vector<int> A;

  int input;

  for(int i = 0; i < n; i++){
    cin >> input;
    A.push_back(input);
  }
  
  int k;
  cin >> k;

  int l, r, m;
  l = 0;
  r = n - 1;


  while(l <= r){
    m = floor((l+r)/2);
    
    if (A[m] == k){
      cout << m << "\n";
      return 0;
    }

    else if(A[m] > k) {
      r = m - 1;
    }

    else l = m + 1;
  }
  cout << "Not found. Returning -1\n";
  return -1;

}
