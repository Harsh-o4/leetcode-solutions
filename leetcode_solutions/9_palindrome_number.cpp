//9. PALINDROME NUMBER
// runtime: 3ms , memory usage: 8.6MB



class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return 0;

    
        int cpy=x;
        long long int pal=0;
        
        while(cpy!=0){
            int rem=cpy%10;
            pal=(pal*10)+rem;
            cpy=cpy/10;
        }

        if(pal==x)
            return 1;
        else
            return 0;

        
        
    }
};