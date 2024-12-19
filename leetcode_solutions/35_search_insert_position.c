//35. Search Insert Position
// Runtime: 0ms , memory usage: 8.21MB



int searchInsert(int* nums, int numsSize, int target) {
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
    return l;
}