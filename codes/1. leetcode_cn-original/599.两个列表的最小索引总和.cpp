/*
 * @lc app=leetcode.cn id=599 lang=cpp
 *
 * [599] 两个列表的最小索引总和
 */

// @lc code=start
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        //1
        int minVal = INT_MAX;
        for(int i=0; i<list1.size(); i++){
            if(find(list2.begin(), list2.end(), list1[i]) != list2.end()){
                auto it = find(list2.begin(), list2.end(), list1[i]);
                int dis = distance(list2.begin(), it);
                minVal = min(minVal, i+dis);
            }
        }

        //2
        vector<string> ans;
        for(int i=0; i<list1.size(); i++){
            if(find(list2.begin(), list2.end(), list1[i]) != list2.end()){
                auto it = find(list2.begin(), list2.end(), list1[i]);
                int dis = distance(list2.begin(), it);
                if(i+dis == minVal){
                    ans.push_back(list1[i]);
                }
            }
        }

        return ans;
    }
};
// @lc code=end

