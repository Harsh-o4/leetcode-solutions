//74. Search a 2D Matrix
// runtime: 0ms , memory used:8.92MB 



bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    
    for(int i = 0; i < matrixSize; ++i){
        if(matrix[i][matrixColSize[i]-1]==target)return true;
        if(matrix[i][matrixColSize[i]-1]>target){
            for(int k = 0; k < matrixColSize[i]; ++k){
                if(matrix[i][k]==target) return true;
            }
        }
    }
    return false;
    
}