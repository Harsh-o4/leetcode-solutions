//242. Valid Anagram
// Runtime: 0ms , memory usage: 9.78MB



class Solution {
public:
    bool isAnagram(string s, string t) {
        int size1 = s.size();
        int size2 = t.size();

        if(size1!=size2)    return false;

        int freq[26];
        for(int i = 0; i < size1; ++i){
            ++freq[s[i]-97];
            --freq[t[i]-97];
        }

        for(int i = 0; i < 26; ++i){
            if(freq[i]!=0) return false;
        }
        return true;
    }
};