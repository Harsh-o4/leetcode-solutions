//2828. Check if a String Is an Acronym of Words
// Runtime: 0 ms, Memory Usage: 43.54 MB



class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if(s.size()!=words.size())  return false;
        
        for(int i = 0; i < s.size(); ++i){
            if(s[i]!=words[i][0])
                return false;
        }
        return true;
    }
};