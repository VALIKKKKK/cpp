#include <iostream>
namespace valik
{
unsigned int strlen(const char* str)
{
    unsigned int i = 0;
    for(; str[i]; ++i);
    return i;
}
void strcpy_(char dest[],const char* src)
{
    for(; *dest++ = *src++;)
    {
        std::cout << *dest;
    }
    std::cout << std::endl;
}
void strncpy(char* dest, char* src, int n)
{
    for(; n-- && (*dest++ = *src++););
    *dest = 0;
}

int strcmp(char* right)
{
    for(int i = 0; right[i]!=0; ++i)
    {

        std::cout <<(int)right[i] << std::endl;
    }
}
}
int main()
{

    char str1[] = "hello";//дома
    char str[] = "hello";//дом
    //valik::strcpy_(str1,str);
    valik::strcmp(str1);
    /*std::cout << str << std::endl;
    std::cout << str1 << std::endl;
      std::cout << valik::strlen(str1) << std::endl;*/
    //std::cout << str1 << std::endl;
    return 0;
}
