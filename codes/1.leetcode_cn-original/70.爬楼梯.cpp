/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if(n <= 0){
            return 0;
        }

        int f1 = 1, f2 = 2, ans = 0;
        int f_1 = 0, f_2 = 0;
        if(n == 1){
            return f1;
        }
        else if(n == 2){
            return f2;
        }
        else{
            f_1 = f1;
            f_2 = f2;
            for(int i=3; i<=n; i++){
                int temp = f_2;
                f_2 = f_1 + f_2;
                f_1 = temp;
            }

            return f_2;
        }
    }
};
// @lc code=end

