#include <cmath>
#include <vector>
#include <iostream>
#include "leetcode/SolutionSearch2DMatrix.h"

using namespace std;

int main() {
    SolutionSearch2DMatrix s;
    vector<vector<int>> empty (0);
    
    cout << "Empty" << endl;
    
    if (s.searchMatrix(empty, 0)){
        cout << "True" << endl;
    } else{
        cout << "False" << endl;
    }
    
    cout << "One line" << endl;

    vector<vector<int>> oneLine{
            {1, 3, 5, 7}
    };

    if (s.searchMatrix(oneLine, 3)){
        cout << "True" << endl;
    } else{
        cout << "False" << endl;
    }

    vector<vector<int>> nums {
            {1,   3,  5,  7},
            {10, 11, 16, 20},
            {23, 30, 34, 50},
            {51, 60, 62, 71},
    };

    vector<int> test = {3, 11, 34, 2, 12, 31, 0, 90};
    
    cout << "Test" << endl;
    
    for (int index : test){
        if (s.searchMatrix(nums, index)) {
            cout << "True" << endl;
        } else{
            cout << "False" << endl;
        }
    }
    
    vector<vector<int>> nums2{
            {1},
            {3},
    };
    if (s.searchMatrix(nums2, 2)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    if (s.searchMatrix(nums2, 1)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}



