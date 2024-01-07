#include<iostream>
#include<vector>
using namespace std;
/*
 * @lc app=leetcode id=658 lang=cpp
 *
 * [658] Find K Closest Elements
 */

// @lc code=start
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        for(int i=1;i<arr.size();i++){
            int diff = abs(arr[i]-x);
            int key = arr[i];
            int j=i-1;

            for(;j>=0;j--){
                if()
            }
        }
    }
};
// @lc code=end

