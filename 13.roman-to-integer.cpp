/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
#include <map>
class Solution {
public:
    int romanToInt(string s) {
        map <char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int sum=0;;
        int n=s.length();
        int tmp;
        for (int i=0;i<n-1;i++)
        {
            tmp=1;
            if (m[s[i]]<m[s[i+1]]) tmp=-1;
            sum=sum+tmp * m[s[i]];
        }
        return sum + m[s[n-1]];
    }
};
