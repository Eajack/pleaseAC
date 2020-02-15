/*
 * @lc app=leetcode.cn id=884 lang=cpp
 *
 * [884] 两句话中的不常见单词
 */

// @lc code=start
class Solution {
public:
    map<string, int> helper(string s){
        //1
        vector<string> split;
        string temp = "";
        for(char c:s){
            if(c != ' '){
                temp += c;
            }
            else{
                if(temp != ""){
                    split.push_back(temp);
                }
                temp = "";
            }
        }

        if(temp != ""){
            split.push_back(temp);
        }

        //2
        map<string, int> m;
        for(string t:split){
            m[t]++;
        }

        return m;
    }
    vector<string> uncommonFromSentences(string A, string B) {
        vector<string> ans;
        map<string, int> a = helper(A), b = helper(B);
        for(auto it=a.begin(); it!=a.end(); it++){
            if(it->second == 1 && b.find(it->first) == b.end()){
                ans.push_back(it->first);
            }
        }
        for(auto it=b.begin(); it!=b.end(); it++){
            if(it->second == 1 && a.find(it->first) == a.end()){
                ans.push_back(it->first);
            }
        }


        return ans;
    }
};
// @lc code=end

