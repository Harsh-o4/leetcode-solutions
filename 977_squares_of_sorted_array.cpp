//977. Squares of Sorted Array
// Runtime: 0ms , Memory usage: 29.75MB



class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     for(int i=0;i<nums.size();++i){
        nums[i]=nums[i]*nums[i];
     }   

     sort(nums.begin(),nums.end());

     return nums;
    }
};