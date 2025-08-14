//436. Find Right Interval
// Runtime: 844ms ; Memory Usage: 28.41MB



class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int> result;

        for(int i = 0; i < intervals.size(); ++i){
            int index = -1;
            int fav = INT_MAX;

            for(int j = 0; j < intervals.size(); ++j){
                
                if(intervals[i][1] <= intervals[j][0] && intervals[j][0]<fav){
                    fav = intervals[j][0];
                    index = j;
                }
            }

            result.push_back(index);            
        }

        return result;
    }
};