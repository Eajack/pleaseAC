/*
 * @lc app=leetcode.cn id=434 lang=cpp
 *
 * [434] 字符串中的单词数
 */

// @lc code=start
class Solution {
public:
    vector<string> split(string s){
        vector<string> ans;
        string temp = "";
        for(char ch:s){
            if(ch != ' '){
                temp += ch;
            }
            else{
                if(temp != ""){
                    ans.push_back(temp);
                }
                temp = "";
            }
        }
        if(temp != ""){
            ans.push_back(temp);
        }
        return ans;
    }
    int countSegments(string s) {
        vector<string> ans = split(s);

        return ans.size();
    }
};
// @lc code=end

