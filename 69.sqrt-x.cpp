/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        if (x==0) return 0;
        if (x<4) return 1;
        if (x<9) return 2;
        long L = 0;
	    long M;
	    long R = x;

        while( L != R - 1 )
        {
            M = (L + R) / 2;

            if( M * M <= x )
                L = M;
            else
                R = M;
        }

        return R-1;

    }
};
// @lc code=end

