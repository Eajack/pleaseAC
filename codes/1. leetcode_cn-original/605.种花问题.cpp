/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int ans = 0;
        for(int i=0; i<flowerbed.size(); i++){
            if(flowerbed[i] == 0){
                if(i-1>=0 && i+1<flowerbed.size() && \
                    flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                    flowerbed[i] = 1;
                    ans++;
                }
                else if(i-1>=0 && i+1>=flowerbed.size()&& \
                    flowerbed[i-1] == 0){
                    flowerbed[i] = 1;
                    ans++;
                }
                else if(i-1<0 && i+1<flowerbed.size()&& \
                    flowerbed[i+1] == 0){
                    flowerbed[i] = 1;
                    ans++;
                }
                else if(i-1<0 && i+1>=flowerbed.size()){
                    flowerbed[i] = 1;
                    ans++;
                }
            }
        }

        return (ans>=n);
    }
};
// @lc code=end

