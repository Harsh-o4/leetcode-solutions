//231. Power of Two
// Runtime: 0ms ; Memory used: 7.86 MB



class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)    return false;
        return(n&(n-1))==0;
    }
};