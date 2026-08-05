#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int MaxWealth = 0, RowSum =0;
        for(int i = 0; i<accounts.size(); i++){
            RowSum = 0;
            for(int j = 0; j<accounts[i].size(); j++){
                RowSum += accounts[i][j];

            }
            MaxWealth = max(RowSum, MaxWealth);
        }
        return MaxWealth;
    }
};