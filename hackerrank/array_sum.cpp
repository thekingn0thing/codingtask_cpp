//
//  array_sum.cpp
//  hackerrank-c
//
//  Created by Arthur Zagretdinov on 25/04/2017.
//  Copyright © 2017 Arthur Zagretdinov. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void calculate_sum() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cout << "Enter number\n";
    
    int n;
    
    cin >> n;
    
    int sum = 0;
    int value;
    
    for (int index = 0; index < n; index++) {
        cin >> value;
        sum += value;
    }
    
    cout << sum;
}

void calculate_sum_3(){
    int a, b, c;

    cin >> a >> b >> c;

    int sum = a + b + c;

    cout << sum;
}
