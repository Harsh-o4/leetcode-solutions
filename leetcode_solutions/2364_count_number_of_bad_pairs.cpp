//2364. Count Number of Bad Pairs
// Runtime: 62 ms, Memory Usage: 87.69 MB



class Solution {
    public:
        long long countBadPairs(vector<int>& nums) {
            long long total = (long long)nums.size()* (nums.size()-1)/2;
            long long good = 0;
    
            unordered_map<int,int> pairs;
    
            for(int i = 0; i < nums.size(); ++i){
                int key = nums[i]-i;
                good += pairs[key];
                pairs[key]++;
            }
    
            long long bad = total - good;
    
            return bad;
        }
    };class Solution {
        public:
            long long countBadPairs(vector<int>& nums) {
                long long total = (long long)nums.size()* (nums.size()-1)/2;
                long long good = 0;
        
                unordered_map<int,int> pairs;
        
                for(int i = 0; i < nums.size(); ++i){
                    int key = nums[i]-i;
                    good += pairs[key];
                    pairs[key]++;
                }
        
                long long bad = total - good;
        
                return bad;
            }
        };