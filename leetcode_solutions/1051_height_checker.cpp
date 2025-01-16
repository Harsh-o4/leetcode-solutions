//1051. Height Checker
// Runtime: 0 ms, memory used: 11.50 MB



class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> copy(heights.size());
        for(int i = 0; i < heights.size(); ++i){
            copy[i]=heights[i];
        }

        sort(copy.begin(),copy.end());
        int difference = 0;
        for(int i = 0; i < heights.size(); ++i){
            if(copy[i]!=heights[i]){
                ++difference;
            }
        }

        return difference;
    }
};