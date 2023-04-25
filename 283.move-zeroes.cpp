/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int num0=0;
        for(int i=0;i<n;++i)
        {
            if (nums[i]!=0) nums[num0++]=nums[i];
        }
        for (int i=num0;i<n;++i)
        {
            nums[i]=0;
        }
    }
};
// @lc code=end

