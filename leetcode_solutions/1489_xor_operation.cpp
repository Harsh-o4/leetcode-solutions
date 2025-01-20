//1486. XOR Operation in an Array
// Runtime: 0 ms, Memory usage: 7.76 MB



class Solution {
public:
    int xorOperation(int n, int start) {
        int value = start;
        for(int i = 1; i < n; ++i){
            value = value ^ (start+(2*i));
        }
        return value;
    }
};