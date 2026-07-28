#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==0){
            return 0;
        }
        int count = 0;
        vector<int>PrefixSum(n,0);

      

        PrefixSum[0] = nums[0];
        for(int i = 1; i<n; i++){
            PrefixSum[i] = PrefixSum[i-1] + nums[i];
        }

        unordered_map<int,int>m;
        for(int j =0; j<n; j++){
            if(PrefixSum[j] == k) count++;

            int val = PrefixSum[j] - k;
            if(m.find(val) != m.end()){
                count += m[val];
            }
            if(m.find(PrefixSum[j]) == m.end()){
                m[PrefixSum[j]] = 0;
            }
            m[PrefixSum[j]]++;
        }
        return count;
        
    }
};