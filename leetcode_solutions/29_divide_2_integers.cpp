//29. Divide two integers
// runtime: 0ms , memory usage: 8.4MB



class Solution {
public:
    int divide(int dividend, int divisor) {
        long long quo=0;
        bool isNegative = (dividend < 0) ^ (divisor < 0);

        if (dividend==0){
            return 0;
        }
        long long div=dividend;
        long long divi=divisor;
        if(div<0)
                div=div*-1;
        if(divi<0)
                divi=divi*-1;
            
        
        while (div >= divi) {
            long long temp = divi, multiple = 1;

            // Find the largest multiple of divisor <= dividend
            while ((temp << 1) <= div) {
                temp <<= 1;
                multiple <<= 1;
            }

            div -= temp;
            quo += multiple;
        }

        // Apply the sign to the result
        if (isNegative) {
            quo = -quo;
        }

        // Clamp the result to the integer range
        return (quo > INT_MAX) ? INT_MAX : quo;
    }
};