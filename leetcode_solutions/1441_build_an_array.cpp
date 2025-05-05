//1441. Build an Array With Stack Operations
// Runtime: 0 ms, Memory Used: 10.78 MB



class Solution {
    public:
        vector<string> buildArray(vector<int>& target, int n) {
            vector<string> answer;
    
            int size = target.size();
    
            int j = 0;
            for(int i = 1; i <= n && j<size ; ++i){
                answer.push_back("Push");
                if(i != target[j]){
                    answer.push_back("Pop");
                }
                else{
                    ++j;
                }
            }
    
            return answer;
        }
    };