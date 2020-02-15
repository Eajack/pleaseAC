/*
 * @lc app=leetcode.cn id=475 lang=cpp
 *
 * [475] 供暖器
 */

// @lc code=start
class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        vector<int> ans;

        for(int s:houses){
            int left = 0, right = heaters.size() - 1, mid = 0;
            while(left < right){
                mid = left + (right - left)/2;
                if(heaters[mid] < s){
                    left = mid + 1;
                }
                else{
                    right = mid;
                }
            }

            if(heaters[left] == s){
                ans.push_back(0);
            }
            else if(heaters[left] < s){
                ans.push_back(s - heaters[left]);
            }
            else if(left > 0){
                ans.push_back(min(heaters[left] - s, s - heaters[left - 1]));
            }
            else{
                ans.push_back(heaters[left] - s);
            }
        }

        return *max_element(ans.begin(), ans.end());
    }
};
// @lc code=end

