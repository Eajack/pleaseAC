/*
 * @lc app=leetcode.cn id=415 lang=cpp
 *
 * [415] 字符串相加
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans = "";
        int i = num1.size() - 1, j = num2.size() - 1;
        int temp = 0, carry = 0, n1 = 0, n2 = 0;
        while(i >= 0 || j >= 0){
            n1 = (i>=0)?(num1[i] - '0'):(0);
            n2 = (j>=0)?(num2[j] - '0'):(0);
            temp = n1 + n2 + carry;
            carry = temp / 10;

            ans = to_string(temp%10) + ans;
            i--;
            j--;
        }

        if(carry == 1){
            ans = "1" + ans;
        }

        return ans;
    }
};
// @lc code=end

