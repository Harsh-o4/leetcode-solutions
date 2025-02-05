//1790. Check if One String Swap Can Make Strings Equal
// Runtime: 0 ms, Memory Usage: 8.49 MB



class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> diff;

        for(int i = 0; i < s1.size(); ++i){
            if(s1[i]!=s2[i])    diff.push_back(i);

            if(diff.size()>2)   return false;
        }

        if(diff.size()==0)  return true;

        if(diff.size()==2)
            return (s1[diff[0]]==s2[diff[1]] && s1[diff[1]]==s2[diff[0]]);

        return false;
    }
};