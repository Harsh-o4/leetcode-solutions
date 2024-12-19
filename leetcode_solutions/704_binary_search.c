//704. Binary Search
// Runtime: 0ms , Memory usage: 9.27MB



int search(int* nums, int numsSize, int target) {
    int l = 0;
    int r = numsSize- 1 ;
    while(r>=l){
        int mid = ( l + r  )/2;
        // printf("%d",mid);
        if(nums[mid]==target)
            return mid;
        else if(nums[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}
