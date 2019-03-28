#include <iostream>
#include <string>
#include <vector>


std::string tickets(const std::vector<int> peopleInLine)
{
    int tf = 0;
    int fifty = 0;
    for(auto i = peopleInLine.begin(); i != peopleInLine.end(); ++i)
    {
       switch (*i)
       {
       case 25:
           ++tf;
           break;

       case 50:
           if(tf > 0)
           {
               --tf;
               ++fifty;
               break;
           }
           else
           {
               return std::string("NO1");
           }
           break;

        case 100:
            if(fifty >= 1 && tf >= 1)
           {
               --fifty;
               --tf;
               break;
           }
           if((tf >= 3) && (fifty >= 0))
           {
               tf -= 3;
               break;
           }

           else
           {
                return std::string("NO2");
           }
           break;

       default:
           return std::string("NO");
       }

    }
    return std::string("YES");
}

int main()
{
    std::vector<int> a{25, 25, 25, 25, 50,100,50};
    std::cout << tickets(a);
    return 0;
}
