#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int answer = 0;
        if(nums.size() == 0){
            return 0;
        }
        for(int i = 0; i<nums.size(); i++)
        {
            int count = 0;
            while(nums[i] != 0)
            {
                count++;
                nums[i] = nums[i] / 10;
            }
            if(count % 2 == 0){
                answer++;

            }
          
        }
        return answer;
        
    }
};