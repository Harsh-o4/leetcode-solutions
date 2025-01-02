//26. Remove Duplicate from Sorted Array
// Runtime: 0ms , memory usage: 12.16MB



int removeDuplicates(int* a, int n) {
    if(n==0)    return 0;

    int end = 1;
    
    for(int i = 1; i < n; ++i){
        if(a[i] != a[i-1]){
            a[end] = a[i];
            ++end;
        }
    }

    return end;
}