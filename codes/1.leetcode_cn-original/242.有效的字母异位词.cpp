/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        //1-
        map<char, int> m_s, m_t;
        for(char ch:s){
            m_s[ch]++;
        }
        for(char ch:t){
            m_t[ch]++;
        }

        //2-
        for(auto iter=m_s.begin(); iter!=m_s.end(); iter++){
            if(m_t.find(iter->first) == m_t.end()){
                return false;
            }
            else if(m_t[iter->first] != iter->second){
                return false;
            }
            else{
                m_t.erase(iter->first);
            }
        }

        return m_t.size() == 0;
    }
};
// @lc code=end

