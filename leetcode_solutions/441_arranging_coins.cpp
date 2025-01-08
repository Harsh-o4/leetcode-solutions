//441. Arranging Coins
// Runtime: 0ms, memory usage: 6.1MB



class Solution {
public:
    int arrangeCoins(int n) {
        int l = 1;
        int r = n;

        while(l<=r){
            int mid = l + (r-l)/2;
            long long limit =(long long) mid*(mid+1)/2;
            if(limit==n) return mid;
            else if(limit<n) l = mid + 1;
            else r = mid - 1;
        }

        return r;
    }
};