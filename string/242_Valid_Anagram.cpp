#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
         vector<int> freq1(26, 0);
    vector<int> freq2(26, 0);

    if (s.length() != t.length())
    {
        return false;
    }

    // counting frequencies of each letter of string s
    for (int i = 0; i < s.length(); i++)
    {
        freq1[s[i] - 'a']++;
    }
    // counting frequencies of each letter of string t
    for (int i = 0; i < t.length(); i++)
    {
        freq2[t[i] - 'a']++;
    }

    if (freq1 == freq2)
    {
        return true;
    }
   return false;
        
    }
};