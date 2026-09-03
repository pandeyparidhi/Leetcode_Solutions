#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        int left = 0, right = x, answer =0;
       
        while(left <= right){
            int mid = left + (right - left)/2;
            if(mid == 0 || mid <= x /mid){
                answer = mid;
                left = mid +1;
            }
            else{
                right = mid-1;
            }

        }
        return answer;
        
        
    }
};