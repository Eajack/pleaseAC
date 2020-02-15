/*
 * @lc app=leetcode.cn id=686 lang=cpp
 *
 * [686] 重复叠加字符串匹配
 */

// @lc code=start
class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        if(A.size() <= 0){
            return -1;
        }

        //1
        int n = ceil( ((double)B.size())/A.size() );
        string temp = A;
        for(int i=1; i<n; i++){
            A += temp;
        }

        //2
        if(A.find(B) != -1){
            return n;
        }
        else{
            A += temp;
            if(A.find(B) != -1){
                return n+1;
            }
            else{
                return -1;
            }
        }
    }
};
// @lc code=end

