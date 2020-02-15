/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 */

// @lc code=start
class Solution {
public:
    bool helper(string s, string t){
        if(s.size() != t.size()){
            return false;
        }

        map<char, int> m;
        for(int i=0; i<s.size(); i++){
            if(m.find(s[i]) == m.end()){
                m[s[i]] = t[i];
            }
            else{
                if(m[s[i]] != t[i]){
                    return false;
                }
            }
        }

        return true;
    }
    bool isIsomorphic(string s, string t) {
        return helper(s, t) && helper(t, s);
    }
};
// @lc code=end

