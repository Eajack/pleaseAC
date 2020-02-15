/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0){
            return "";
        }
        else if(strs.size() == 1){
            return strs[0];
        }

        string temp = strs[0];
        for(int i=0; i<strs.size(); i++){
            while(temp != "" && strs[i].find(temp) != 0){
                temp = temp.substr(0, temp.size()-1);
            }
        }

        return temp;
    }
};
// @lc code=end

