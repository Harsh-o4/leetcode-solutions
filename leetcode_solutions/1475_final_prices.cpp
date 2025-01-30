//1475. Final Prices With a Special Discount in a Shop
// Runtime: 0 ms, Memory Usage: 14.14 MB



class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        for(int i = 0; i < prices.size(); ++i){

            for(int j = i + 1; j < prices.size(); ++j){
                if(prices[j]<=prices[i]){
                    prices[i] -= prices[j];
                    break;
                }
            }
        }

        return prices;
    }
};