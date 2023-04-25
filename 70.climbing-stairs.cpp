/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if (n==1) return 1;
        if (n==2) return 2;
        int t1=1;
        int t2=2;
        for(int i=0;i<n-2;++i)
        {
            t2=t1+t2;
            t1=t2-t1;
        }
        return t2;
    }
};
// @lc code=end

