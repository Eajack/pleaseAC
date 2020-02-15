/*
 * @lc app=leetcode.cn id=263 lang=cpp
 *
 * [263] 丑数
 */

// @lc code=start
class Solution {
public:
    bool isUgly(int num) {
        if(num <= 0){
            return false;
        }
        else if(num == 1){
            return true;
        }

        int cnt2 = 0, cnt3 = 0, cnt5 = 0;
        int temp = num;
        while(temp > 0 && temp%2 == 0){
            temp /= 2;
            cnt2++;
        }
        while(temp > 0 && temp%3 == 0){
            temp /= 3;
            cnt3++;
        }
        while(temp > 0 && temp%5 == 0){
            temp /= 5;
            cnt5++;
        }

        if(pow(2,cnt2) * pow(3,cnt3) * pow(5, cnt5) == num){
            return true;
        }
        else{
            return false;
        }
    }
};
// @lc code=end

