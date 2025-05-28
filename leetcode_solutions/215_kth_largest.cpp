//215. Kth Largest Element in an Array
// Runtime: 4ms, Memory Usage: 59.27MB



class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        nth_element(nums.begin(), nums.begin() + (n - k), nums.end());
        return nums[n - k];
    }
};