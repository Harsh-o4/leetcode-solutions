//342. Power of Four
//Runtime: 0ms ; Memory Usage: 8.01MB



class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)    return false;
        
        return (n & (n - 1)) == 0 && (n & 0xAAAAAAAA) == 0;
    }
};