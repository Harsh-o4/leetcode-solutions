//1207. Unique Number of Occurrences
// Runtime: 0 ms, Memory Usage: 11.98 MB



class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> freq;

        for(int val:arr){
            ++freq[val];
        }

        map<int,int> unique;
        for(const auto& [key,value]:freq){
            ++unique[value];

            if(unique[value]==2) return false;
        }

        return true;
    }
};