/*
 * @lc app=leetcode.cn id=888 lang=cpp
 *
 * [888] 公平的糖果交换
 */

// @lc code=start
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        //1
        int s1 = 0, s2 = 0;
        for(int a:A){
            s1 += a;
        }
        for(int b:B){
            s2 += b;
        }

        //2
        vector<int> ans;
        int ave = (s1 + s2)/2, diff = ave - s1;
        for(int a:A){
            if(find(B.begin(), B.end(), a+diff) != B.end()){
                ans.push_back(a);
                ans.push_back(a+diff);
                break;
            }
        }

        return ans;
    }
};
// @lc code=end

