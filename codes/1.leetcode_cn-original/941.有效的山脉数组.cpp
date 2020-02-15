/*
 * @lc app=leetcode.cn id=941 lang=cpp
 *
 * [941] 有效的山脉数组
 */

// @lc code=start
class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        //1
        if(A.size() < 3){
            return false;
        }

        //2
        auto it = max_element(A.begin(), A.end());
        int i = distance(A.begin(), it);
        if(i > 0 && i < A.size()-1){
            //3
            int t = 1;
            for(int j=0; j<i; j++){
                t = j + 1;
                if(A[j] >= A[t]){
                    return false;
                }
            }

            cout << i << endl;
            //4
            for(int j=i; j<A.size()-1; j++){
                t = j + 1;
                if(A[j] <= A[t]){
                    return false;
                }
            }

            return true;   
        }
        else{
            return false;
        }
    }
};
// @lc code=end

