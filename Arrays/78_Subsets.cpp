#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
// o(n * 2^n )
    void getallsubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>&allsubsets){
        if(i == nums.size()){
            //store subsets
            allsubsets.push_back({ans});
            return;

        }

        // include
        ans.push_back(nums[i]);
        getallsubsets(nums, ans, i+1, allsubsets);

        ans.pop_back();
        // exclude
        getallsubsets(nums, ans, i+1, allsubsets);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allsubsets;
        vector<int>ans;

        getallsubsets(nums, ans, 0, allsubsets);
        return allsubsets;
    }
};