//58. length of last word
// runtime: 0ms , memory usage: 8MB



class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int i= s.size()-1;

        while(i>=0 && s[i]==' ' )
        {
            i--;
        }

        int j=0;

        while(i>=0 && s[i]!=' '){
            i--;
            j++;
        }
        return j;
    }
};