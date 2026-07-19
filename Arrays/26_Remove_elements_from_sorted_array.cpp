#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1 ,idx = 0, n = nums.size();
        if(n==0)
        {
            return idx;

        }
        while (i < n)
        {
            if (nums[i] == nums[idx])
            {
            i++;
            }
            else
            {
            idx++;
            nums[i] = nums[idx];
            i++;
            }
        }
       return idx+1; 
    }
};