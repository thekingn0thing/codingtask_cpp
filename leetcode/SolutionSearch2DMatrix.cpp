//
// Created by Arthur Zagretdinov on 17/09/2017.
//

#include "SolutionSearch2DMatrix.h"

bool SolutionSearch2DMatrix::searchMatrix(vector<vector<int>> &matrix, int target) {
    long n = matrix.size();
    if (n == 0){
        return false;
    }else if (n == 1){
        return binary_search(matrix[0].begin() , matrix[0].end(), target);
    }
    
    long m = matrix[0].size() - 1;
    
    if(m < 0){
        return false;
    }
    
    long start = 0;
    long end = n - 1;
    long mid = (end - start) / 2;
    
    while (start <= end) {
        if (target < matrix[mid][0]) {
            end = mid - 1;
        } else if (matrix[mid][m] < target){
            start = mid + 1;
        } else {
            return binary_search(matrix[mid].begin() , matrix[mid].end(), target);
        }
        mid = start + (end - start) / 2;
    }
    
    return false;
}
