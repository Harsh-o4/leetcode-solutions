//1672. Richest Customer Wealth
// Runtime: 0 ms, Memory Usage: 11.37 MB



class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;

        for(int i = 0; i < accounts.size(); ++i){
            int sum = 0;
            for(int k = 0; k < accounts[i].size(); ++k){
                sum+=accounts[i][k];                
            }
            if(sum>max){
                max=sum;
            }
        }

        return max;
    }
};