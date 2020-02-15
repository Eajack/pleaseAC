/*
 * @lc app=leetcode.cn id=1002 lang=cpp
 *
 * [1002] 查找常用字符
 */

// @lc code=start
class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<string> ans;
        string cur = A[0];
            
        for(char c:cur){
            int cnt = 0;
            for(int j=0; j<A.size(); j++){
                if(A[j].find(c) != -1){
                    cout << A[j] << " " << c << endl;
                    cnt++;
                }
            }

            if(cnt == A.size()){
                string t(1,c);
                ans.push_back(t);
            }
        }
        return ans;
    }
};
// @lc code=end

