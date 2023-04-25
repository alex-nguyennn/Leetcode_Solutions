/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
#include <vector>
class Solution {
public:

    bool isPalindrome(int x) {
        if (x<0) return false;
        if (x<10) return true;
        int tmp;
        long long n=x;
        long long s=0;
        while (n!=0)
        {
            tmp=n%10;
            s=s*10+tmp;
            n=n/10;
        }
        return (s==x?true:false);
    }
};

// @lc code=end

