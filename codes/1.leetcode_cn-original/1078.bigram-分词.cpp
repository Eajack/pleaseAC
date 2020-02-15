/*
 * @lc app=leetcode.cn id=1078 lang=cpp
 *
 * [1078] Bigram 分词
 */

// @lc code=start
class Solution {
public:
    vector<string> split(string s){
        vector<string> ans;
        string temp = "";
        for(char ch:s){
            if(ch !=' '){
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
    vector<string> findOcurrences(string text, string first, string second) {
        //1
        vector<string> sp = split(text);

        //2
        vector<string> ans;
        int j = 0;
        for(int i=0; i<sp.size()-2; i++){
            j = i + 1;
            if(sp[i] == first && sp[j] == second){
                ans.push_back(sp[i+2]);
            }
        }

        return ans;
    }
};
// @lc code=end

