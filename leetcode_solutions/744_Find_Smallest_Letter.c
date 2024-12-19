//744. Find Smallest Letter Greater Than Target
// Runtime: 0ms , memory usage: 8.59MB





char nextGreatestLetter(char* letters, int lettersSize, char target) {
if (target < letters[0] || target >= letters[lettersSize - 1]) {
        return letters[0];
    }
    
    int l = 0, r = lettersSize - 1;
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (letters[mid] > target) {
            r = mid; // Narrow down to the left half
        } else {
            l = mid + 1; // Narrow down to the right half
        }
    }
    return letters[l];
}