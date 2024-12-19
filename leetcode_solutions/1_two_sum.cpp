//1. Two sum
// Runtime: 39ms , memory usage: 14.31MB





class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        int size= nums.size();
        printf("%d",size);
        for( int i = 0; i < size; ++i){
            for(int j = i + 1; j < size; ++j){
                if( nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};