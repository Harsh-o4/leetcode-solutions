//69. Sqrt(x)
// runtime: 0ms , memory used: 8.3MB



class Solution {
public:
    int mySqrt(int x) {
        if(x==1)
            return 1;
        if(x==0)
            return 0;
        int min=1;
        int max=x;
        double square;

        while(min<=max){
            square=min+(max-min)/2;
            if(square*square>x)
                max=square-1;
            else if(square*square==x)
                return square;
            else
                min=square+1;

        }
        
        return max;  
    }
};