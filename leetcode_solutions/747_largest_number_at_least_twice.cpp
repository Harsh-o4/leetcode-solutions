//747. Largest Number At Least Twice of Others
// Runtime: 0ms, memory used: 13.78MB



class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max_index = 0;
        int max = nums[0];

        for(int i = 1; i < nums.size(); ++i){
            if(nums[i]>max){
                max = nums[i];
                max_index = i;
            }
        }

        for(int i = 0; i < nums.size(); ++i){
            if(i!=max_index && nums[i]*2>max)   return -1;
        }

        return max_index;
    }
};