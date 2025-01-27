//2114. Maximum Number of Words Found in Sentences
// Runtime: 0 ms, Memory Usage: 12.90 MB



class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int max = 0;

        for(int i = 0; i < s.size(); ++i){
            int words = 0;
            for(int j = 0; j < s[i].size(); ++j){
                if(s[i][j]==' '){
                    ++words;
                }
            }
            if(words>max)   max=words;
        }

        return max+1;
    }
};