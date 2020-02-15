/*
 * @lc app=leetcode.cn id=908 lang=cpp
 *
 * [908] 最小差值 I
 */

// @lc code=start
class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int m1 = *max_element(A.begin(), A.end()), \
            m2 = *min_element(A.begin(), A.end());
        
        return max(m1-m2-2*K, 0);
    }
};
// @lc code=end

