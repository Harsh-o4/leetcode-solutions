// 2938. Separate Black and White Balls
// runtime: 7ms , memory usage: 15.62MB

class Solution {
public:
    long long minimumSteps(string s) {
        long long swaps = 0;  // Total swaps needed
        long long countOnes = 0;  // Count of '1's encountered so far
        
        
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '1') {
                countOnes++;
            } else {
                swaps += countOnes;
            }
        }
        
        return swaps;
    }
};
