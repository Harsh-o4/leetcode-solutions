//27. Remove Element
// Runtime: 0ms , memory usage: 9.54MB



int removeElement(int* a, int numsSize, int val) {
    int j = 0;  
    for (int i = 0; i < numsSize; ++i) {
        if (a[i] != val) {
            a[j++] = a[i];
        }
    }
    return j;  
}