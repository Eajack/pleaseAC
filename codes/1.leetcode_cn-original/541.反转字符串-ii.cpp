/*
 * @lc app=leetcode.cn id=541 lang=cpp
 *
 * [541] 反转字符串 II
 */
class Solution {
public:
    string reverseStr(string s, int k) {
        string ans = "";
        int k_cnt = s.size()/(2*k), k_extra = s.size()%(2*k);

        //1
        for(int i=0; i<k_cnt; i++){
            for(int j=(2*k*i)+k-1; j>=(2*k*i); j--){
                ans += s[j];
            }
            for(int j=(2*k*i)+k; j<2*k*(i+1); j++){
                ans += s[j];
            }
        }

        //2-
        int index = 0;
        int k_temp = k;
        if(k_extra < k){
            index = s.size()-1;
            while(k_extra--){
                ans += s[index];
                index--;
            }
        }
        else{
            index = (2*k*k_cnt)+k-1;
            while(k_temp--){
                ans += s[index];
                index--;
            }
            for(int i=(2*k*k_cnt)+k; i<s.size(); i++){
                ans += s[i];
            }
        }

        return ans;
    }
};

