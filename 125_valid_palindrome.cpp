//125. Valid palindrome
//runtime: 0ms , memory usage: 9.4MB



class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        int size= s.size(); 
        

        //storing in new location
        for(int i=0;i<size;++i){
        
            if(s[i]>=48 && s[i]<=57 || s[i]>=97 && s[i]<=122 || s[i]>=65 && s[i]<=90)
                str += s[i];
            
        }
         if(str.size()==0)
            return 1;
        
        //pointers
        int k=0;
        int j= str.size()-1;

        while(k<=j){
            if(tolower(str[k])!=tolower(str[j]))
                return 0;
            ++k;
            --j;
        }
        return 1;

    }
};