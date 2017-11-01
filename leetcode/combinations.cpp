//
// Created by Arthur Zagretdinov on 01/11/2017.
//

#include "combinations.h"

using namespace std;

vector<vector<int>> Combinations::combine(int n, int k) {
    vector<vector<int>> res;
    int i = 0;
    vector<int> v(k, 0);
    while (i >= 0) {
        
        v[i]++;
        if (v[i] > n){
            --i;
        }else if (i == k - 1) {
            res.push_back(v);
        } else {
            ++i;
            v[i] = v[i - 1];
        }
    }
    return res;
}
