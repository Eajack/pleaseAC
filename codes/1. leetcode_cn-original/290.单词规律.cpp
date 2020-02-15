/*
 * @lc app=leetcode.cn id=290 lang=cpp
 *
 * [290] 单词规律
 */

// @lc code=start
class Solution {
public:
    vector<string> split(string str){
        vector<string> list;
        string s = "";
        for(char ch:str){
            if(ch != ' '){
                s += ch;
            }
            else{
                list.push_back(s);
                s = "";
            }
        }
        list.push_back(s);

        return list;
    }
    bool wordPattern(string pattern, string str) {
        //1-
        vector<string> list = split(str);

        //2-
        if(pattern.size() != list.size()){
            return false;
        }
        else{
            map<char, string> m;
            for(int i=0; i<pattern.size(); i++){
                if(m.find(pattern[i]) == m.end()){
                    m[pattern[i]] = list[i];
                }
                else{
                    if(m[pattern[i]] != list[i]){
                        return false;
                    }
                }
            }

            map<string, char> t;
            for(int i=0; i<list.size(); i++){
                if(t.find(list[i]) == t.end()){
                    t[list[i]] = pattern[i];
                }
                else{
                    if(t[list[i]] != pattern[i]){
                        return false;
                    }
                }                
            }

            return true;
        }
    }
};
// @lc code=end

