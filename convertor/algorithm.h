#ifndef ALGORITHM_H_INCLUDED
#define ALGORITHM_H_INCLUDED
#include <string>
#include <cmath>

char to_string(int digit)
{
    if(digit >= 0 && digit < 10)
    {
        return '0' + digit;
    }
    switch(digit)
    {
        case 10:return 'A';
        case 11:return 'B';
        case 12:return 'C';
        case 13:return 'D';
        case 14:return 'E';
        case 15:return 'F';
    }
}
std::string reverse(std::string a)
{
    std::string res;
    for(auto i = a.rbegin(); i != a.rend(); ++i)
    {
        res.push_back(*i);
    }
    return res;
}

std::string dec_to_bin(int a)
{
    std::string res;
    for(; a ; a = a >> 1)
    {
        if(a&1)
        {
            res.push_back('1');
        }
        else
        {
            res.push_back('0');
        }
    }
    return reverse(res);
}

int bin_to_dec(std::string a)
{
   int res = 0;
   for(int i = 0; i < a.length(); ++i)
   {
       if(a[i] == '1')
       {
           res = res + std::pow(2,i);
       }
   }
   return res;
}

std::string bin_to_hex(int value)
{
    int temp = 0;
    std::string res;
    for(; value; value = value >> 4)
    {
        temp = value & 15;
        res.push_back(to_string(temp));
    }
    return reverse(res);
}


#endif // ALGORITHM_H_INCLUDED


