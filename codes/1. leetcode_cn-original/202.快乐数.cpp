/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution {
public:
    int h(int n){
        int ans = 0, d = 0;
        while(n != 0){
            d = n%10;
            ans += d*d;
            n /= 10;
        }

        return ans;
    }

    bool isHappy(int n) {
        map<int, int> m = {
            {n,1}
        };

        while(n != 1){
            n = h(n);
            if(m.find(n) != m.end()){
                return false;
            }
            m[n] = 1;
        }

        return true;
    }
};
// @lc code=end

