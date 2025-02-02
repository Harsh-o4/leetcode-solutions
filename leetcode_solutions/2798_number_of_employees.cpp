//2798. Number of Employees Who Met the Target
// Runtime: 0 ms, Memory Usage: 26.4MB



class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int employees = 0;
        for(int i = 0; i < hours.size(); ++i){
            if(hours[i]>=target)    ++employees;
        }

        return employees;
    }
};