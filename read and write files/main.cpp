#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <iterator>
#include <string>
#include <cstddef>
#include <ctime>
#include <fstream>
#include "generate_random.h"



int main()
{
    std::string temp = get_random_string(65, 122, 10);
    std::ofstream out;
    out.open("Hell.txt");
    out << temp;
    std::cout << temp << std::endl;
    std::sort(temp.begin(), temp.end());
    out.close();
    std::ofstream out1;
    out1.open("Hell.txt");
    out1 << temp;
    std::cout << temp << std::endl;
    return 0;
}
