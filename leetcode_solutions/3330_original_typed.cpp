//3330.  Find the Original Typed String I
// Runtime: 2 ms, Memory Used: 8.99 MB



class Solution {
public:
    int possibleStringCount(string word) {
        int possible = 1;

        for(int i = 1; i < word.size(); ++i){
            if(word[i]==word[i-1])  ++possible;
        }

        return possible;
    }
};