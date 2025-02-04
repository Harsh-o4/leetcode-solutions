//1800. Maximum Ascending Subarray Sum
// Runtime: 0 ms, Memory Usage: 11.04 MB



class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int max = nums[0];
        int subsum = nums[0];

        for(int i = 1; i<nums.size(); ++i){
            if(nums[i]>nums[i-1])   subsum += nums[i];
            else    subsum = nums[i];

            if(subsum>max)  max=subsum;
        }

        return max;
    }
};