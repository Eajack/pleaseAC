/*
 * @lc app=leetcode.cn id=796 lang=cpp
 *
 * [796] 旋转字符串
 */

// @lc code=start
class Solution {
public:
    bool rotateString(string A, string B) {
        // if(A == B){
        //     return true;
        // }

        // string a;
        // for(int i=0; i<A.size(); i++){
        //     a = A.substr(i+1) + A.substr(0, i+1);
        //     cout << a << endl;
        //     if(a == B){
        //         return true;
        //     }
        // }

        // return false;

        string C = A + A;
        return A.size() == B.size() && C.find(B) != -1;
    }
};
// @lc code=end

