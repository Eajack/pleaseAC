/*
 * @lc app=leetcode.cn id=1207 lang=cpp
 *
 * [1207] 独一无二的出现次数
 */

// @lc code=start
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        //1
        map<int, int> m;
        for(int a:arr){
            m[a]++;
        }

        //2
        vector<int> v;
        for(auto it=m.begin(); it!=m.end(); it++){
            v.push_back(it->second);
        }

        //3
        m.clear();
        for(int a:v){
            if(m.find(a) != m.end()){
                return false;
            }
            else{
                m[a]++;
            }
        }

        return true;
    }
};
// @lc code=end

