/*
 * @lc app=leetcode.cn id=720 lang=cpp
 *
 * [720] 词典中最长的单词
 */

// @lc code=start
class Solution {
public:
    bool cmp(string a, string b){
        return a < b;
    }
    string st(vector<string> trie){
        sort(trie.begin(), trie.end(), cmp);
        return trie[0];
    }

    string longestWord(vector<string>& words) {
        //1
        map<int, vector<string>> m;
        int maxVal = -1;
        for(string w:words){
            m[w.size()].push_back(w);
            maxVal = max(maxVal, (int)w.size());
        }

        //2
        vector<int> trie;
        for(int i=maxVal; i>=1; i--){
            if(m.find(i) != m.end()){
                vector<string> v = m[i];
                for(string s:v){
                    //substr find
                    bool flag = true;
                    for(int j=0; j<s.size(); j++){
                        string sub = s.substr(0,j+1);
                        if(find(words.begin(), words.end(), sub) == words.end()){
                            flag = false;
                            break;
                        }
                    }
                    //trie
                    if(flag){
                        trie.push_back(s);
                    }
                }

                //trie sort
                if(trie.size() > 0){
                    return ts(trie);
                }
            }
        }

        return "";
    }
};
// @lc code=end

