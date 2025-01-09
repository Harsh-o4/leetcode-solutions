//202. Happy Number
// Runtime: 3ms, Memory: 8.41 MB



class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        
        while(n != 1 && seen.find(n) == seen.end()){
            seen.insert(n);
           int digit_sum = 0;
        while(n!=0){
            digit_sum += (n%10)*(n%10);
            n /= 10;
        }
        n = digit_sum;
        }

        cout<<n;

        return n==1;
    }
};