//1108. Defanging an IP Address
// Runtime: 3 ms, Memory Usage: 7.77 MB



class Solution {
public:
    string defangIPaddr(string s) {
        string result;

        for(int i = 0; i < s.size(); ++i){
            if(s[i]=='.'){
                result += '[';
                result += '.';
                result += ']';
            }
            else{
                result += s[i];
            }
        }

        return result;
    }
};