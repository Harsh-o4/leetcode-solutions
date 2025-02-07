//3110. Score of a String
// Runtime: 0 ms, Memory Usage: 8.78 MB



class Solution {
public:
    int scoreOfString(string s) {
      int score = 0;

      for(int i = 0; i < s.size()-1; ++i){
        int diff = s[i]>s[i+1] ? s[i]-s[i+1] : s[i+1]-s[i];
        score += diff;
      }  

      return score;
    }
};