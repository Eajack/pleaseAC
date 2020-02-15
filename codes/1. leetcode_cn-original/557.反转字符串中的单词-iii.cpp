/*
 * @lc app=leetcode.cn id=557 lang=cpp
 *
 * [557] 反转字符串中的单词 III
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
                    temp = "";
                }
            }
        }

        if(temp != ""){
            ans.push_back(temp);
        }

        return ans;
    }

    string reverseWords(string s) {
        //1
        vector<string> s_ans = split(s);

        //2
        string ans = "";
        for(string t:s_ans){
            string t1(t.rbegin(),t.rend());
            ans += (t1 + " ");
        }

        return ans.substr(0, ans.size()-1);
    }
};
// @lc code=end

