/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map <int , int> ma;
        for(int i=0;i<n;i++)
        {
            int num= target- nums[i];
            if (ma.count(num)!=0)
            {
                return {ma[num],i};
            }
            else ma[nums[i]]=i;
        }
        return {};
    }
};
// @lc code=end




