/*
 * @lc app=leetcode.cn id=859 lang=cpp
 *
 * [859] 亲密字符串
 */

// @lc code=start
class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A.size() != B.size()){
            return false;
        }
        else{
            vector<int> ans;
            map<char, int> m;
            for(int i=0; i<A.size(); i++){
                m[A[i]]++;
                if(A[i] != B[i]){
                    ans.push_back(i);
                }
            }
            
            if(ans.size() != 0 && ans.size() != 2){
                return false;
            }
            else if(ans.size() == 2){
                if(A[ans[0]] == B[ans[1]] && A[ans[1]] == B[ans[0]]){
                    return true;
                }
            }
            else{
                if(m.size() < A.size()){
                    return true;
                }
            }
            return false;
        }
    }
};
// @lc code=end

