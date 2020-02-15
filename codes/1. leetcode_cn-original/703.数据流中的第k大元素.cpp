/*
 * @lc app=leetcode.cn id=703 lang=cpp
 *
 * [703] 数据流中的第K大元素
 */

// @lc code=start
class KthLargest {
public:
    vector<int> n;
    int t = 0;
    KthLargest(int k, vector<int>& nums) {
        n = nums;
        t = k;
    }
    
    int add(int val) {
        n.push_back(val);
        sort(n.begin(), n.end());
        return n[n.size() - t];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
// @lc code=end

