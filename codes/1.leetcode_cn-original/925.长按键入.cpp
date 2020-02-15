/*
 * @lc app=leetcode.cn id=925 lang=cpp
 *
 * [925] 长按键入
 */

// @lc code=start
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0, j = 0, j_temp = 0;
        while(i < name.size() && j < typed.size()){
            if(name[i] == typed[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }

        return i==name.size();
    }
};
// @lc code=end

