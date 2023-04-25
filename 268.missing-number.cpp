/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;++i)
        {
            sum += nums[i];
        }
        return n*(n+1)/2-sum;
    }
};
// @lc code=end

