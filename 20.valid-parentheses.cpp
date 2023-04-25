/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include <string>
#include <vector>
class Solution {
public:
    bool check(char x, char y)
    {
        if (x=='(' && y==')') return true;
        if (x=='[' && y==']') return true;
        if (x=='{' && y=='}') return true;
        return false;
    };
    bool isValid(string s) {
        int n=s.length();
        if (n%2!=0) return false;
        if (n==0) return true;
        vector <char> st;  
        st.push_back('c');
        for (int i=0;i<n;++i)
        {
            if (check(st[st.size()-1],s[i]) ) 
            {
                st.pop_back();
            }
            else st.push_back(s[i]);
        }
        if (st.size()==1) return true;
        else return false;
    }
};
// @lc code=end

