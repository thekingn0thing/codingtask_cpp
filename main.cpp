#include <cmath>
#include <vector>
#include "leetcode/single_number_3.cpp"

using namespace std;

int main() {
    vector<int> nums {1, 2, 4, 3, 1, 2, 5, 4};
    Solution s;
    const vector<int> &vector = s.singleNumber(nums);
    s.print_vector(vector);
    return 0;
}



