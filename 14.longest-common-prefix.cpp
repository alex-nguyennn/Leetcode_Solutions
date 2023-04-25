/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
#include <string>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==0) return "";
        
        sort(begin(strs), end(strs));
        
        const string& a = strs[0];
        const string& b = strs[n-1];

        size_t i=0;
        for(i=0; i < a.size(); i++){
            if(a[i] != b[i]) break;
        }
        
        return string {&a[0], i};
    }
};
// @lc code=end

