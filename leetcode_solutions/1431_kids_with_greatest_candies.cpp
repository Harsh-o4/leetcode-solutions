//1431. Kids With the Greatest Number of Candies
// Runtime: 0 ms, Memory usage: 12.36 MB



class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = candies[0];

        for(int i = 1; i < candies.size(); ++i){
            if(candies[i]>max){
                max = candies[i];
            }
        }

        vector<bool> result;
        for(int i = 0; i < candies.size(); ++i){
            if(candies[i]+extraCandies >= max){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }

       return result; 
    }
};