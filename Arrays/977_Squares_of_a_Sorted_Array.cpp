#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       
        int n = nums.size();
        int left = 0, right = n-1;
        int idx = n-1;
        vector<int>ans(n);
        while(left <= right){
            if(abs(nums[left]) > abs(nums[right])){
                ans[idx] = nums[left] * nums[left];
                left++;
            }
            else{
                ans[idx] = nums[right] * nums[right];
                right--;
            }
            idx--;
        }
        return ans;
        
    }
};