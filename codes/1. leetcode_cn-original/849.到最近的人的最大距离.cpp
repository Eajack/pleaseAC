/*
 * @lc app=leetcode.cn id=849 lang=cpp
 *
 * [849] 到最近的人的最大距离
 */

// @lc code=start
class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        //1
        int n = seats.size(), prev = INT_MIN/2;
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(seats[i] == 1){
                prev = i;
            }
            ans[i] = i - prev;
        }

        prev = INT_MAX/2;
        for(int i=n-1; i>=0; i--){
            if(seats[i] == 1){
                prev = i;
            }
            ans[i] = min(ans[i], prev-i);
        }

        return *max_element(ans.begin(), ans.end());
    }
};
// @lc code=end

