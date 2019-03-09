#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

#include "algorithms.h"

#define TEXT_MESSEGE "Dear (no) moron, if you want to fill the array with a random one,\
or you just press Beluguin press 1 and go out the window.If you want to fill the array with the keyboard,\
it is better to just lay down under the train and press 2."
#define I int
#define print_contenier(first, last) stu::for_each (first, last, [](int value) {std::cout << value << " ";});
#define fill_array_from_clava(first, last) stu::for_each(first, last, [](int& value){std::cin >> value;})
#define ARRAY std::vector<int>

#endif // UTIL_H_INCLUDED
