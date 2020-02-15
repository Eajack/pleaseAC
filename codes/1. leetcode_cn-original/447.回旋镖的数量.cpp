/*
 * @lc app=leetcode.cn id=447 lang=cpp
 *
 * [447] 回旋镖的数量
 */

// @lc code=start
class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        //1
        int ans = 0;
        map<int, int> m;
        for(int i=0; i<points.size(); i++){
            m.clear();
            vector<int> cur = points[i];
            for(int j=0; j<points.size(); j++){
                vector<int> pre = points[j];
                if(i != j){
                    int dis = pow((cur[0]-pre[0]), 2) + pow((cur[1]-pre[1]), 2);
                    m[dis]++;
                }
            }

            for(auto it=m.begin(); it!=m.end(); it++){
                if(it->second > 1){
                    ans += (it->second)*((it->second)-1);
                }
            }
        }

        return ans;
    }
};
// @lc code=end

