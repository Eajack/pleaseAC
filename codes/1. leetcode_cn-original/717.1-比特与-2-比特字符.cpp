/*
 * @lc app=leetcode.cn id=717 lang=cpp
 *
 * [717] 1比特与2比特字符
 */

// @lc code=start
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0;
        while(i < bits.size()-1){
            if(bits[i] == 0){
                i++;
            }
            else{
                i += 2;
            }
        }

        return i==bits.size()-1;
    }
};
// @lc code=end

