/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        string s="";
        int n=a.length()-1;
        int m=b.length()-1;
        string ans="";
        int carry=0;
        while (m>=0||n>=0||carry)
        {
            if (n>=0)
            {
                carry+= a[n]-'0';
                n--;
            }
            if (m>=0)
            {
                carry+= b[m]-'0';
                m--;
            }
            ans += (carry%2 + '0');
            carry = carry/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
// @lc code=end

