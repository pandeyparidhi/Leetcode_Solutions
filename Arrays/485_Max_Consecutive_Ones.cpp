#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int MaxOnes = 0, count = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1){
                count++;
            }
            else{
                MaxOnes = max(count, MaxOnes);
                count = 0;
            }
             MaxOnes = max(count, MaxOnes);
        }
        return MaxOnes;
    }
};