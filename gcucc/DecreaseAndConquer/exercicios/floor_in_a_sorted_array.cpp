//resolvi mas isso aqui eh linear; nao consegui fazer com binary search
class Solution {
public:
  int findFloor(vector<int>& arr, int x){
    int index = -1;

    for (int i = 0; i < arr.size(); i++){
      if(arr[i] <= x){
        index = i;
      }
    }

    return index;

  }
};
