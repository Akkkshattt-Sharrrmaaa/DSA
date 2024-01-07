#include<iostream>
#include<string>
using namespace std;

/*
 * @lc app=leetcode id=680 lang=cpp
 *
 * [680] Valid Palindrome II
 */

// @lc code=start
class Solution {
public:
    bool checkPal(string s){
        int beg = 0;
        int end = s.length()-1;
        int mid = beg + (end -beg)/2;

        while(beg<=end){
            if(s[beg]==s[end]){
                beg++;
                end--;
            }else{
                return false;
            }
        }

    return true; 
    }

    bool validPalindrome(string s) {

        if(checkPal(s)){
            return true;
        }else{

        int beg = 0;
        int end = s.length()-1;
        int mid = beg + (end -beg)/2;

        s.erase(mid,1);

        if(checkPal(s)){
            return true;
        }
        return false;
        }
    }
};
// @lc code=end

