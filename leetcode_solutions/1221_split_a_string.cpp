//1221. Split a String in Balanced Strings
// Runtime: 0 ms; Memory usage: 8.35 MB



class Solution {
public:
    int balancedStringSplit(string s) {
        int ss = 0;
        int x = 0;

        for(int i = 0; i < s.size(); ++i){
            if(s[i]=='R') ++x;
            if(s[i]=='L')   --x;

            if(x==0)    ++ss;
        }

        return ss;
    }
};