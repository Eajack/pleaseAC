/*
 * @lc app=leetcode.cn id=812 lang=cpp
 *
 * [812] 最大三角形面积
 */

// @lc code=start
class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double ans = 0;
        for(int i=0; i<points.size(); i++){
            for(int j=i+1; i<points.size(); j++){
                for(int k=j+1; k<points.size(); k++){
                    cout << getArea(points[i], points[j], points[k]) << endl;
                    ans = max(ans, getArea(points[i], points[j], points[k]));
                }
            }
        }

        return ans;
    }

    double getArea(vector<int>& v1, vector<int>& v2, vector<int>& v3){
        double a = sqrt( pow(v1[0]-v2[0], 2) + pow(v1[1]-v2[1], 2) ),
               b = sqrt( pow(v1[0]-v3[0], 2) + pow(v1[1]-v3[1], 2) ),
               c = sqrt( pow(v3[0]-v2[0], 2) + pow(v3[1]-v2[1], 2) );
        double p =0.5 * (a+b+c);

        return p*(p-a)*(p-b)*(p-c);
    }
};
// @lc code=end

