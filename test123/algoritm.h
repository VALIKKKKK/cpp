#ifndef ALGORITM_H_INCLUDED
#define ALGORITM_H_INCLUDED
void f3(const char* str)
{
    int arr[127] {0};
    for(; *str != 0; ++str)
    {
        ++arr[*str];
    }
    for(int i = 0; i < 128; ++i)
    {
        std::cout << (char)i << " " <<arr[i] << std::endl;
    }
}
int f7(const char* str)
{
    int arr[127] {0};
    int max_counter = 0;
    char s = 0;
    int counter = 0;
    for(; *str != 0; ++str)
    {
        if(*str == *(str + 1))
        {
            ++counter;
        }
        else
        {
            if(counter > max_counter)
            {
                max_counter = counter;
                s = *str;
            }
            counter = 0;
        }
    }
    return max_counter;
}
void f8(const char* str)
{
    int arr[127] {0};
    for(; *str != 0; ++str)
    {
        ++arr[*str];
    }
    for(int i = 0; i < 128; ++i)
    {
        std::cout << (char)i << " " <<arr[i] << std::endl;
    }
}

char count(char* src)
{
    char c;
    int temp;
    int i = 0;
    for(;*src!=0;++src)
    {
        for(;*src!=0;++src)
        {
std::cout << *src << std::endl;
            if(*src == src[i])
            {

                c=*src;
                ++temp;
            }
            ++i;
        }
        if(temp==1)
        {
            std::cout << "c" << std::endl;
            return c;
        }
    }

}
template <typename UP >
void f8_1(char* src, char* dest, UP p)
{
    for(; *src ; ++src)
    {
        if(*src != p(src))
        {
            std::cout << p(src) << std::endl;
            *dest = *src;
            ++dest;
        }
    }
    *dest = 0;
}


#endif // ALGORITM_H_INCLUDED
