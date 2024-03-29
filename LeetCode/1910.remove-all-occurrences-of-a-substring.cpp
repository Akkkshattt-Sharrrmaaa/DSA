#include<iostream>
#include<string>
using namespace std;

/*
 * @lc app=leetcode id=1910 lang=cpp
 *
 * [1910] Remove All Occurrences of a Substring
 */

// @lc code=start
class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        
        int pos = s.find(part);

        while(pos!= string::npos){
            s.erase(pos,part.length());
            pos=s.find(part);
        }

    return s;
        
    }
};
// @lc code=end

