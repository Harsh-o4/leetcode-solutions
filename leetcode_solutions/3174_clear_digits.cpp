//3174. Clear Digits
// Runtime: 19ms, Memory Usage: 8.46 MB



class Solution {
    public:
        string clearDigits(string s) {
            for(int i = s.size()-1; i > 0; --i){
                if(isdigit(s[i]) && s[i-1]>=97){
                    cout<<s[i]<<" and "<<s[i-1]<<endl;
                    s.erase(i-1,2);
                }
            }
            return s;
        }
    };