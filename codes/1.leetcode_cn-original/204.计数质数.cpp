/*
 * @lc app=leetcode.cn id=204 lang=cpp
 *
 * [204] 计数质数
 */

// @lc code=start
class Solution {
public:
    bool isPrime(int n){
        int t = (int)sqrt((double)n);
        for(int i=2; i<=t; i++){
            if(n%i == 0){
                return false;
            }
        }

        return true;
    }
    int countPrimes(int n) {
        if(n <= 2){
            return 0;
        }
        else{
            int cnt = 0;
            for(int i=2; i<n; i++){
                if(isPrime(i)){
                    cnt++;
                }
            }
            return cnt;
        }
    }
};
// @lc code=end

