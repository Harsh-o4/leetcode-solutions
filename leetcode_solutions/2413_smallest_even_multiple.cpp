//2413. Smallest Even Multiple
// Runtime: 0 ms, Memory usage: 7.87 MB



class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2==0)
            return n;
        else 
            return 2*n;
    }
};