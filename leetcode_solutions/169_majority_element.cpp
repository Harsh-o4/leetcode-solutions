//169. Majority Element
// Runtime: 3 ms, Memory used: 28.16 MB



class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        return nums[nums.size()/2];
    }
};