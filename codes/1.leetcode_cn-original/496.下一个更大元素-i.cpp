/*
 * @lc app=leetcode.cn id=496 lang=cpp
 *
 * [496] 下一个更大元素 I
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //1
        vector<int> ans;
        for(int n1:nums1){
            auto it = find(nums2.begin(), nums2.end(), n1);
            int index = distance(nums2.begin(), it);
            if(index == -1){
                ans.push_back(-1);
            }
            else{
                bool flag = false;
                while(index < nums2.size()){
                    if(nums2[index] > n1){
                        ans.push_back(nums2[index]);
                        flag = true;
                        break;
                    }
                    index++;
                }

                if(!flag){
                    ans.push_back(-1);
                }
            }
        }

        return ans;
    }
};
// @lc code=end

