//3105. Longest Strictly Increasing or Strictly Decreasing Subarray
// Runtime: 0 ms, Memory Usage: 27.88 MB



class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int max = 1;
        int inc = 1;
        int dec = 1;

        for(int i = 1; i < nums.size(); ++i){
            if(nums[i-1]<nums[i]) ++inc;
            else    inc = 1;

            if(nums[i-1]>nums[i])   ++dec;
            else    dec = 1;

            if(inc>max) max = inc;
            if(dec>max) max = dec;
        }

        return max;
    }
};