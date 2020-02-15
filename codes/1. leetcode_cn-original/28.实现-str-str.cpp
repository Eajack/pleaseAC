/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size() < needle.size()){
            return -1;
        }

        string temp = haystack;
        for(int i=0; i<=haystack.size()-needle.size(); i++){
            if(temp.find(needle) == 0){
                return i;
            }
            else{
                temp = temp.substr(1);
            }
        }

        return -1;
    }
};
// @lc code=end

