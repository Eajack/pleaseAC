/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int child_cnt = 0;
        sort(g.rbegin(), g.rend());
        sort(s.rbegin(), s.rend());

        for(int i=0; i<s.size(); i++){
            for(int j=0; j<g.size(); j++){
                if(s[i] >= g[j]){
                    child_cnt++;
                    g.erase(g.begin()+j);
                    break;
                }
            }
        }

        return child_cnt;
    }
};

