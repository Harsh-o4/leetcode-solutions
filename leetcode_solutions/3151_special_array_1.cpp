//3151. Special Array I
// Runtime: 0 ms, Memory Usage: 27.72 MB



class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for(int i = 0; i < nums.size()-1; ++i){
            if(nums[i]%2 == nums[i+1]%2)
                return false;
        }

        return true;
    }
};