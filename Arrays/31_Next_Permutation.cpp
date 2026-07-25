#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int pivot = -1, n= arr.size();
        // find the pivot
        for(int i = n-2; i>=0; i--){
            if(arr[i] < arr[i+1]){
                pivot = i;
                break;
            }
        }

        if(pivot == -1){
            reverse(arr.begin(),arr.end());// in place changes
            return;
        }

        // 2nd step : next larger element
        for(int i =n-1; i>pivot; i--){
            if(arr[i] > arr[pivot])
            {
                swap(arr[i], arr[pivot]);
                break;
            }
        }
        // 3rd step : reverse (pivot+1 to n-1)
        int i = pivot + 1;
        int j = n-1;
      
        while(i<=j){
            swap(arr[i++], arr[j--]);
          
        }

        
        
    }
};