/*
 * @lc app=leetcode.cn id=961 lang=cpp
 *
 * [961] 重复 N 次的元素
 */

// @lc code=start
class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        map<int, int> m;
        for(int a:A){
            if(m.find(a) != m.end()){
                return a;
            }
            else{
                m[a] = 1;
            }
        }

        return -1;
    }
};
// @lc code=end

