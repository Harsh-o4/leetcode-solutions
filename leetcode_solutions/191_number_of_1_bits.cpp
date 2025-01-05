//191. Number of 1 Bits
// Runtime: 0ms , memory usage: 8.28MB



class Solution {
public:
    int hammingWeight(int n) {
        int ones = 0;

        while(n!=0){
            if(n%2==1)  ++ones;
            n = n /2;
        }
        
        return ones;
    }
};