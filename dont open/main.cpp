#include <iostream>

using namespace std;

int main()
{


    int arr [3] {1, 2, 3};
    int* arr1 = new int [3] {1, 2, 3};
    delete [] arr1;
    arr1 = new int [5]{1, 2, 3, 4, 5};
    arr1 = arr;
    for (int i = 0; i < 1000000000; ++i)
    {
        int* arr1 = new int[10000000];
        delete [] arr1;
    }
    std::cout << "hello";
    return 0;
}
