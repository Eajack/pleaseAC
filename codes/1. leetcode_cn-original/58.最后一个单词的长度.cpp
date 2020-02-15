/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size() == 0){
            return 0;
        }

        //尾部去空格
        string s_temp = s;
        while(s_temp.back() == ' '){
            s_temp = s_temp.substr(0, s_temp.size()-1);
        }
        
        int ans = 0;
        for(int i=s_temp.size()-1; i>=0; i--){
            if(s_temp[i] != ' '){
                ans++;
            }
            else{
                break;
            }
        }

        return ans;
    }
};
// @lc code=end

