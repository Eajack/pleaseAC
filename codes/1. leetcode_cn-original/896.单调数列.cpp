/*
 * @lc app=leetcode.cn id=896 lang=cpp
 *
 * [896] 单调数列
 */

// @lc code=start
class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        if(A.size() == 0){
            return false;
        }
        else if(A.size() == 1){
            return true;
        }

        //1
        int upCnt = 0, lowCnt = 0;
        int i=0, j=1;
        while(j < A.size()){
            if(A[i] == A[j]){
                upCnt++;
                lowCnt++;
            }
            else if(A[i] < A[j]){
                upCnt++;
            }
            else{
                lowCnt++;
            }
            i++;
            j++;
        }
        cout << upCnt << endl;

        //2
        if(upCnt == A.size()-1 || lowCnt == A.size()-1){
            return true;
        }
        else{
            return false;
        }
    }
};
// @lc code=end

