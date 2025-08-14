//986. Interval List Intersections
// Runtime: 40ms ; Memory Used: 22.93 MB



class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> result;

        for(int i = 0; i < firstList.size(); ++i){

            for(int j = 0; j < secondList.size(); ++j){

                if(firstList[i][0] > secondList[j][1] || firstList[i][1] < secondList[j][0])    continue;

                int lower = max(firstList[i][0],secondList[j][0]);
                int upper = min(firstList[i][1],secondList[j][1]);

                
                result.push_back({lower,upper});
            }
        }

        return result;
    }
};