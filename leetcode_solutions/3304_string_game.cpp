//3304. Find the K-th Character in String Game I
// Runtime: 3 ms ; Memory used: 9.70 MB



class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";

        while((int)s.size()<=k){
            string copy = s;

            for(char c: copy){
                s.push_back(c+1);
            }
        }

        return s[k-1];

    }
};