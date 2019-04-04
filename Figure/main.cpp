#include <iostream>

template<class T>
struct Figure
{
    Figure(){std::cout << "Figure()";}
    virtual T get_square() = 0;
    virtual T get_perimetr() = 0;
    std::string get_name(){std::cout << "Figure";
    return std::string("Figure");}
};

template<class T>
struct Rectangle:Figure<T>
{
    T side_a;
    T side_b;
};

int main()
{
    Rectangle<double> a;
    return 0;
}
