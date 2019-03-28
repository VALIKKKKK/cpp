#include <iostream>
#include <string>
#include <algorithm>

void encoder(std::string& text, int key)
{
    for(int i = 0; i < text.length(); ++i)
    {
        text[i] = text[i]^key;
    }

}

char get_key(std::string text)
{
     std::sort(text.begin(), text.end());
    int max_el = 0;
    int max_el_now = 1;
    char temp = text[0];
    for(int i = 0; i < text.length(); ++i)
    {
        if(text[i] == text[i+1])
        {
            ++max_el_now;
        }
        else
        {
            if(max_el < max_el_now)
            {
                temp = text[i];
                max_el = max_el_now;
                max_el_now = 1;
            }
        }
    }
    return temp;
}

void decoder(std::string& text)
{
    auto key = get_key(text);
    key = key ^ 32;
    for(int i = 0; i < text.length(); ++i)
    {
        text[i] = text[i] ^ key;
    }
}

int main()
{
    std::string a("LOL @valekkashko @timazarenok sdi psdn nsdln budu bit daunom bst hh ff dd lndk sdlks lsd bs ljs ln lns @kujatata.life");
    encoder(a, 255);
    std::cout << a << std::endl;
    decoder(a);
    std::cout << a << std::endl;
    return 0;
}
