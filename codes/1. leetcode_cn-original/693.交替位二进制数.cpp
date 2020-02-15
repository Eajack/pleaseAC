/*
 * @lc app=leetcode.cn id=693 lang=cpp
 *
 * [693] 交替位二进制数
 */

// @lc code=start
class Solution {
public:
    string toBin(int n){
        string ans = "";
        while(n > 0){
            ans = to_string(n%2) + ans;
            n /= 2;
        }
        return ans;
    }
    bool hasAlternatingBits(int n) {
        string str = toBin(n);
        if(str.size() == 1){
            return true;
        }
        else{
            char d1 = str[0], d2 = str[1];
            if(d1 == d2){
                return false;
            }
            else{
                for(int i=2; i<str.size(); i++){
                    if( !(i%2 == 0 && str[i] == d1) && \
                        !(i%2 == 1 && str[i] == d2) ){
                        return false;
                    }
                }
                return true;
            }
        }
    }
};
// @lc code=end

