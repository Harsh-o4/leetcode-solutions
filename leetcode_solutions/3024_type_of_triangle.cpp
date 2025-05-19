//3024. Type of Triangle
// Runtime: 0 ms, Memory Usage: 23.00 MB



class Solution {
public:
    string triangleType(vector<int>& nums) {
        if(nums[0]+nums[1]>nums[2] && nums[1]+nums[2]>nums[0] && nums[0]+nums[2]>nums[1]){
            if(nums[0]==nums[1] && nums[1]==nums[2])    return "equilateral";
            else if(nums[0]!=nums[1] && nums[1]!=nums[2] && nums[2]!=nums[0])   return "scalene";
            else    return "isosceles";
        }
        else return "none";
        
    }
};