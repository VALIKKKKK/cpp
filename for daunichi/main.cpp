#include <iostream>
#include <string>

using Func = void (*)();

struct Cat
{
    std::string name;
    int iq;
    Func say_hello = [](){
    std::cout << "this->name" << std::endl;
    };

};

int main()
{
    Cat a;
    a.name = "Lox";
    a.say_hello();
    a.say_hello = []()
    {
        std::cout << "Hello world!" << std::endl;
    };
    a.say_hello();
    return 0;
}
