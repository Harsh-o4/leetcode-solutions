//7. Reverse Integer
// Runtime: 0ms , memory usage: 8.6MB




int reverse(int x){
    int rev=0;
    while(x!=0){
        if(rev>2147483648/10 || rev<-2147483648/10)
            return 0;
        rev= rev * 10;
        rev= rev + (x % 10);
        x= x / 10;
    }
    
    return rev;
}