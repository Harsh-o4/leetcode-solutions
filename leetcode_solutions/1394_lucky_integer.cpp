//1394. Find Lucky Integer in an Array
// Runtime: 0 ms , Memory Used: 14.00 MB



class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> result;

        for(int &val: arr){
            result[val]++;
        }

        int largest_lucky = -1;

        for(const auto &pair: result){
            if(pair.first == pair.second && pair.first > largest_lucky)   
                largest_lucky = pair.first;

        }

        return largest_lucky;
    }
};