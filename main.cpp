#include <cmath>
#include <vector>
#include <iostream>
#include "geekforgeek/tree.h"
#include "geekforgeek/MirrorTree.h"

void run_tc(string tree) {
    Node *root = parse_string_to_tree(&tree);
    
    cout << "In: ";
    print_tree(root);
    
    
    MirrorTree task;
    task.mirror(root);
    
    cout << " Out : ";
    print_tree(root);
    cout << endl;
}

using namespace std;

int main() {
    run_tc("1 2 R 1 3 L");
    run_tc("10 20 L 10 30 R 20 40 L 20 60 R");
    run_tc("10 20 R 20 30 R 30 40 R");
    run_tc("10 20 L 20 30 L 30 40 L");
    
    return 0;
}





