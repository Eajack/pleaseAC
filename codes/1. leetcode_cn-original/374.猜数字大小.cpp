/*
 * @lc app=leetcode.cn id=374 lang=cpp
 *
 * [374] 猜数字大小
 */

// @lc code=start
// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int l=1, r=n, mid=0;
        while(l <= r){
            mid = l + (r-l)/2;
            if(guess(mid) == 0){
                return mid;
            }
            else if(guess(mid) == -1){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return -1;
    }
};
// @lc code=end

