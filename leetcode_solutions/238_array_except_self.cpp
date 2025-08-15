//238. Product of Array Except Self
//Runtime: 1ms ; Memory Usage: 42.42 MB



class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size(),1);
        vector<int> right(nums.size(),1);

        int curr = 1;
        for(int i = 1; i < nums.size(); ++i){
            curr *= nums[i-1];
            left[i] = curr;
        }

        curr = 1;
        for(int i = nums.size()-2; i >= 0; --i){
            curr *= nums[i+1];
            right[i] = curr;
        }

        for(int i = 0; i < nums.size(); ++i){
            nums[i] = left[i] * right[i];
        }
        
        return nums;
    }
};