/*
 * @lc app=leetcode.cn id=860 lang=cpp
 *
 * [860] 柠檬水找零
 */

// @lc code=start
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int, int> m = {
            {5,0},
            {10,0},
            {20,0}
        };

        for(int b:bills){
            if(b == 5){
                m[5]++;
            }
            else if(b == 10){
                m[10]++;
                if(m[5] == 0){
                    return false;
                }
                else{
                    m[5]--;
                }
            }
            else if(b == 20){
                m[20]++;
                //10 + 5
                if(m[10] > 0 && m[5] > 0){
                    m[10]--;
                    m[5]--;
                }
                //5 + 5 + 5
                else if(m[5] >= 3){
                    m[5] -= 3;
                }
                else{
                    return false;
                }
            }
        }

        return true;
    }
};
// @lc code=end

