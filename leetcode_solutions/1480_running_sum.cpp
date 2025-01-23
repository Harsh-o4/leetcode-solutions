//1480. Running Sum of 1d Array
// Runtime: 0 ms, Memory Usage: 12.5 MB



class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum(nums.size());

        sum[0] = nums[0];

        for(int i = 1; i < nums.size(); ++i){
            sum[i] = sum[i-1] + nums[i];
        }

        return sum;
    }
};