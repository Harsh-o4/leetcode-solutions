//461. Hamming Distance
// Runtime: 0 ms, Memory used: 7.76 MB



class Solution {
public:
    int hammingDistance(int x, int y) {
        int differ = 0;

        if(x==y)    return 0;

        while(x!=0 || y!=0){
            
            int rem1 = x%2; x /= 2;
            int rem2 = y%2; y /= 2;
            
            if(rem1!=rem2){
                ++differ;
            }
        }

        return differ;
    }
};