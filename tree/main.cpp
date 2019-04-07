#include <iostream>
#include "binary_search_tree.h"


int main()
{
    BinarySearchTree a;
    a.insert(10);
    a.insert(9);
    a.insert(8);
    a.insert(7);
    a.insert(24);
    a.insert(100);
    a.insert(100);
    a.print_all();
    return 0;
}
