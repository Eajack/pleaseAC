/*
 * @lc app=leetcode.cn id=821 lang=cpp
 *
 * [821] 字符的最短距离
 */

// @lc code=start
class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int n = S.size(), prev = INT_MIN/2;
        vector<int> ans(n);

        for(int i=0; i<n; i++){
            if(S[i] == C){
                prev = i;
            }
            ans[i] = i - prev;
        }

        prev = INT_MAX/2;
        for(int i=n-1; i>=0; i--){
            if(S[i] == C){
                prev = i;
            }
            ans[i] = min(ans[i], prev - i);
        }

        return ans;
    }
};
// @lc code=end

