//367. Valid Perfect Square
// Runtime: 0ms, memory usage: 7.70MB



class Solution {
public:
    bool isPerfectSquare(int num) {
      int n = 1;
      while(num/n>=n){
        if(n*n==num)    return true;
        ++n;
      }  
      return false;
    }
};