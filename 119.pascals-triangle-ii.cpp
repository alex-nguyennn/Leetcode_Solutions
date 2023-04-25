/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> r(rowIndex+1,0);
        r[0]=1;
        for (int i=1;i<rowIndex+1;++i)
        {
            for(int j=i;j>=1;--j)
            {
                r[j]+=r[j-1];
            }
        }
        return r;
    }
};
// @lc code=end

