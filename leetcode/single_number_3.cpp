
#include <cmath>
#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
    
        int diff = 0;
        for (int num : nums){
            diff ^= num;
        }
        diff &= -diff;
    
        vector<int> c = {0, 0};
        for (int num : nums)
        {
            if ((num & diff) == 0)
            {
                c[0] ^= num;
            }
            else
            {
                c[1] ^= num;
            }
        }
        return c;
    }
    
    void print_vector(vector<int> a) {
        for (int &i : a)
            cout << i << ' ';
        cout << endl;
    }
};

