/*
 * @lc app=leetcode.cn id=443 lang=cpp
 *
 * [443] 压缩字符串
 */

// @lc code=start
class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0, j = 1, index = 0, cnt = 1;
        while(i < chars.size()){
            while(i < chars.size() && j < chars.size() && chars[j] == chars[i]){
                cnt++;
                j++;
            }

            //
            chars[index++] = chars[i];
            if(cnt > 1){
                string cnt_str = to_string(cnt);
                for(int i=0; i<cnt_str.size(); i++){
                    chars[index++] = cnt_str[i];
                }
            }

            //
            i = j;
            j += 1;
            cnt = 1;
        }

        return index;
    }
};
// @lc code=end

