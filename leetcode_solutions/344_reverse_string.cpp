//344. Reverse String
// runtime: 45ms , Memory usage: 16.88MB




void reverseString(char* s, int sSize) {
    
    
    
    int left = 0, right = sSize-1;
    int pos=right;

    while(left<right){
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    
   }
