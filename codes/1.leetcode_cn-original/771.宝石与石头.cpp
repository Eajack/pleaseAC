/*
 * @lc app=leetcode.cn id=771 lang=cpp
 *
 * [771] 宝石与石头
 */

// @lc code=start
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        //1
        map<char, int> m;
        for(char j:J){
            m[j]++;
        }

        //2
        int ans = 0;
        for(char s:S){
            if(m.find(s) != m.end()){
                ans++;
            }
        }

        return ans;
    }
};
// @lc code=end

