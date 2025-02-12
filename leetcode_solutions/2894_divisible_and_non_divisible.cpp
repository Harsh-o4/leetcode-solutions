//2894. Divisible and Non-divisible Sums Difference
// Runtime: 0 ms, Memory Usage: 8.42 MB



class Solution {
    public:
        int differenceOfSums(int n, int m) {
            int result = 0;
    
            for(int i = 0; i <= n; ++i){
                if(i%m==0)  result -= i;
                else    result += i;
            }
    
            return result;
        }
    };