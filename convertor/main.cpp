#include <iostream>
#include "algorithm.h"
#include <string>

int main()
{
    std::string res = dec_to_bin(125);
    int res1 = bin_to_dec(reverse(res));
    std::string a = bin_to_hex(27);
    std::cout << a << std::endl;
    //std::cout << res1 << std::endl;
    return 0;
}
