#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans;
        for(int i = 0; i < nums.size(); i++){
            int j = 0, count = 0;
            while(j < nums.size())
            {
                if(nums[i] > nums[j])
                {
                    count++;
                    j++;
                }
                else
                {
                    j++;
                }
                
            }
            ans.push_back(count);
        }
        return ans;
        
    }
};