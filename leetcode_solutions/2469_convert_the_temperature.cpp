//2469. Convert the Temperature
// Runtime: 0 ms, Memory usage: 8.18 MB



class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans(2);

        ans[0]= celsius + 273.15;
        ans[1]= celsius*1.8 +32.00;

        return ans;
    }
};