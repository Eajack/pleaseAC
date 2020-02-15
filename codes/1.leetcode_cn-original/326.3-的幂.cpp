/*
 * @lc app=leetcode.cn id=326 lang=cpp
 *
 * [326] 3的幂
 */

// @lc code=start
class Solution {
public:
    string toNBit(int n, int N){
        string ans = "";
        while(n > 0){
            ans = to_string(n%N) + ans;
            n /= N;
        }

        return ans;
    }

    bool isPowerOfThree(int n) {
        if(n <= 0){
            return false;
        }

        string s = toNBit(n, 3);
        string t = s.substr(1);
        string k = "";
        for(int i=1; i<=s.size()-1; i++){
            k += "0";
        }

        cout << s << endl;
        if( s[0] == '1' && t == k ){
            return true;
        }
        return false;
    }
};
// @lc code=end

