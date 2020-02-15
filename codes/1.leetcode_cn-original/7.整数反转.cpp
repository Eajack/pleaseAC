/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        long temp = abs((long)x);
        //1-
        vector<long> v;
        while(temp > 0){
            v.push_back(temp%10);
            temp /= 10;
        }

        //2-
        long y = 0;
        for(int i=0; i<v.size(); i++){
            y += v[i] * (long)pow(10, v.size()-1-i);
        }

        //3-
        if(y > INT_MAX){
            return 0;
        }
        return (x>=0)?(y):(-y);
    }
};
// @lc code=end

