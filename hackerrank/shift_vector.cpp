#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

vector<int> shift_vector(const vector<int> a, const int k) {
    const unsigned long n = a.size();
    vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        int r = i - k;
        int si = r;
        if(r < 0){
            si += n;
        }
        result[si] = a[i];
    }
    return result;
}

void print_vector(vector<int> a) {
    for (auto i = a.begin(); i != a.end(); ++i)
        cout << *i << ' ';
    cout << endl;
}

int shift_vector_main() {
    long n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr(n);
    for (int ar_i = 0; ar_i < n; ar_i++) {
        cin >> arr[ar_i];
    }
    vector<int> result = shift_vector(arr, k);
    print_vector(result);
    return 0;
}



