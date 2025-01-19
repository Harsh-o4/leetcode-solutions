//1470. Shuffle the Array
// Runtime: 4 ms, Memory used: 13.58 MB



class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        for(int i = 0; i < n; ++i){
            result.push_back(nums[i]);
            result.push_back(nums[i+n]);
        }

        return result;
    }
};