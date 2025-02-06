//1726. Tuple with Same Product
// Runtime: 319 ms, Memory Usage: 84.88 MB



class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        if(nums.size()<4)   return 0;

        unordered_map<int,int> products;
       
        int n = nums.size();

        for(int i = 0 ; i < n; ++i){
            for(int j = i+1; j < n; ++j){
                int product = nums[i]*nums[j];
                products[product]++;
            }
        }

        int num = 0;

        for(const auto& [product,count] : products){
            if(count>=2){
                num += count*(count-1)*4;
            }
        }

        return num;
    }
};