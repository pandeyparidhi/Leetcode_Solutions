#include<iostream>
#include<string>
#include<vector>
using namespace std;


class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        if(s1.length() > s2.length()){
            return false;
        }
        for(char ch : s1){
            freq1[ch-'a']++;
        }
        for(int i= 0; i<s1.length();i++){
            freq2[s2[i] - 'a']++;
        }
        
        
        if(freq1 == freq2){
            return true;
        }
        int left = 0, right = s1.length();
        while(right<s2.length()){
            freq2[s2[left]-'a']--;
            freq2[s2[right]-'a']++;

            if(freq1 == freq2){
                return true;
            }
            left++;
            right++;
        }
        return false;
        
        
    }
};