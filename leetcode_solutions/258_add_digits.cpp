//258. Add Digits
// Runtime: 0ms , memory usage: 8.52MB



class Solution {
public:
    int addDigits(int num) {
        redo:
        int copy = num;
        num = 0;

        while(copy!=0){
            num = num + (copy%10);
            copy /= 10;
        }

        if(num>9)   goto redo;

        return num;
    }
};