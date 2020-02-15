/*
 * @lc app=leetcode.cn id=520 lang=cpp
 *
 * [520] 检测大写字母
 */

// @lc code=start
class Solution {
public:
    bool detectCapitalUse(string word) {
        //1
        bool flag1 = false;
        int upCnt = 0, lowCnt = 0;
        for(char w:word){
            if(isupper(w)){
                upCnt++;
            }
            else{
                lowCnt++;
            }
        }

        if(upCnt == word.size() || \
            lowCnt == word.size()){
            flag1 = true;
        }

        //2
        bool flag2 = false;
        if(word.size() > 1 && isupper(word[0])){
            lowCnt = 0;
            for(int i=1; i<word.size(); i++){
                if(!isupper(word[i])){
                    lowCnt++;
                }
            }

            if(lowCnt + 1 == word.size()){
                flag2 = true;
            }
        }

        //3
        bool flag3 = false;
        if(word.size() == 1 && !isupper(word[0])){
            flag3 = true;
        }

        cout << flag1 << "\t" << flag2 << "\t" << flag3 << endl;
        return (flag1 || flag2 || flag3);
    }
};
// @lc code=end

