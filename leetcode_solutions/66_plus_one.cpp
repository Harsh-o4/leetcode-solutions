//66. Plus One
// Runtime: 0ms , memory usage: 11.60MB



class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        int carry = 1;

        for(int i = size-1; i >= 0; --i){
            digits[i] += carry;

            if(digits[i]==10){
                digits[i]=0;
                carry = 1;
            }
            else{
                carry=0;
                break;
            }
        }

        if(carry==1){
            digits.insert(digits.begin(),1);
        }

        return digits;
    }
};