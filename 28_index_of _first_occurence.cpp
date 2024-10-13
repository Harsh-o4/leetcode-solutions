//28. Find the index of first occurrence in a string
// runtime: 4ms , memory usage: 8.1MB



class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(needle.size()==0)
            return 0;
        if(haystack.size()<needle.size())
            return -1;
        
        for(int i=0;i<=haystack.size()-needle.size();++i){
           
            if(haystack.substr(i,needle.size())==needle)
                return i;
            
        }
        return -1;
    }
};
