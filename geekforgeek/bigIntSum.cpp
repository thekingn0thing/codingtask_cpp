#include <vector>
#include <iostream>
#include "bigIntSum.h"

vector<int> *calculate_sum(vector<int> *a, vector<int> *b) {
    const unsigned long n = a->size();
    const unsigned long m = b->size();
    
    if (n < m) {
        return a;
    }
    
    const unsigned long min = std::min(n, m);
    
    auto *r = new vector<int>(n);
    int add = 0;
    
    for (unsigned long i = 1; i <= min; ++i) {
        const int s = (*a)[n - i] + (*b)[m - i] + add;
        (*r)[n - i] = s % 10;
        if (s / 10 > 0) {
            add = 1;
        } else {
            add = 0;
        }
    }
    
    
    if (min < n) {
        for (unsigned long i = min + 1; i <= n; ++i) {
            const int s = (*a)[n - i] + add;
            (*r)[n - i] = s % 10;
            if (s / 10 > 0) {
                add = 1;
            } else {
                add = 0;
            }
        }
    }
    
    if (add == 1) {
        return a;
    }
    
    return r;
}

void run_tc() {
    char ch;
    auto *a = new vector<int>();
    auto *b = new vector<int>();
    vector<int> *c = a;
    
    while (cin && c) {
        cin.read(&ch, sizeof(ch));
        if (ch == ' ' || (ch == '\n' && c->size() > 0)) {
            c = c == a ? b : nullptr;
        }
        if ('0' <= ch && ch <= '9') {
            c->push_back((int) (ch - '0'));
        }
    }
    const vector<int> r = *calculate_sum(a, b);
    for (auto v : r) {
        cout << v;
    }
    cout << endl;
}
