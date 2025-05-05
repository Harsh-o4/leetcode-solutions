//435. Non-overlapping Intervals
// Runtime: 38 ms , Memory Used: 93.87 MB



class Solution {
    public:
        int eraseOverlapIntervals(vector<vector<int>>& intervals) {
            int removal = 0;
    
            sort(intervals.begin(), intervals.end(), [](auto& a, auto& b) { return a[1] < b[1]; });
    
            int last = intervals[0][1];
    
            for(int i = 1; i < intervals.size(); ++i){
                if(intervals[i][0]<last){
                    ++removal;
                }
                else{
                    last = intervals[i][1];
                }
            }
    
            return removal;
        }
    };