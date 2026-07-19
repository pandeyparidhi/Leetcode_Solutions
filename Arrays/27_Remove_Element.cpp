#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0, idx = 0;
        while (i < nums.size())
    {
        if (nums[i] == val)
        {
            i++;
        }
        else
        {
            swap(nums[idx],nums[i]);
            idx++;
            i++;
        }
    }
    return idx;
        
    }
};