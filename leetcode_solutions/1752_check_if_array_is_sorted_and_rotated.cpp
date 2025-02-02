//1752. Check if Array Is Sorted and Rotated
// Runtime: 0 ms, Memory Usage: 11.14 MB



class Solution {
public:
    bool check(vector<int>& nums) {
        int unordered = 0;

        for(int i = 0; i < nums.size()-1; ++i){
            
            if(nums[i]>nums[i+1]){
                ++unordered;
            }
            if(nums[nums.size()-1]>nums[0] && unordered > 0){
                ++unordered;                   
            }    
            if(unordered>=2)    return false;
        }

        return true;
    }
};