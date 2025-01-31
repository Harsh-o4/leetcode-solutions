//3168. Minimum Number of Chairs in a Waiting Room
// Runtime: 0 ns, Memory Usage: 8.90 MB



class Solution {
public:
    int minimumChairs(string s) {
        int max = 0;
        int person = 0;

        for(int i = 0; i < s.size(); ++i){
            if(s[i]=='E')   ++person;
            else    --person;
            if(person>max)  max = person;
        }

        return max;
    }
};