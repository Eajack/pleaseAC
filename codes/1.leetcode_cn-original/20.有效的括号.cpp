/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 0){
            return true;
        }

        map<char, char> m = {
            {')','('}, {']','['}, {'}', '{'}
        };
        stack<char> save;
        for(char ch:s){
            if(save.size() == 0){
                save.push(ch);
            }
            
            else{
                switch (ch){
                    case '(':
                    case '[':
                    case '{':{
                        save.push(ch);
                        break;
                    }
                    case ')':
                    case ']':
                    case '}':{
                        if(save.top() == m[ch]){
                            save.pop();
                        }
                        else{
                            return false;
                        }
                        break;
                    }                              
                    default:
                        break;
                }
            }
        }

        return (save.size() == 0);
    }
};
// @lc code=end

