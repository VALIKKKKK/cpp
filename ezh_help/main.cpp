#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
#include <exception>
#include <stdexcept>

template <class Iterator, class UP>
Iterator _find_if(Iterator first, Iterator last, UP p)
{
for(; first!=last; ++first)
{
if(p(*first))
{
return first;
}
}
return last;
}
enum Month
{
Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};
using Day = unsigned int;
struct Date
{
Day day;
Month month;
Date (Day _day = 1, Month _month = Month::Jan): day (_day), month(_month){}

};
bool operator == (Date a, Date b)
{
return (a.month== b.month)&&(a.day==b.day);
}
bool operator!= (Date a, Date b)
{
return !(a==b);
}
bool operator > (Date a, Date b)
{
if (a.month!=b.month)
{
return a.month>b.month;
}
return a.day>b.day;
}
operator>= (Date a, Date b)
{
return a > b || a==b;
}
bool operator< (Date a, Date b)
{
if (a.month!=b.month)
{
return a.month < b.month;
}
return a.day < b.day;
}
operator<= (Date a, Date b)
{
return a < b || a ==b;
}
struct ZodiacSign
{
std::string name;
Date start;
Date end;
ZodiacSign() = default;
ZodiacSign(std::string _name, Date _start, Date _end)
{
name = _name;
start = _start;
end = _end;

}


};

int main()
{
std::vector<ZodiacSign> arr {ZodiacSign(" Aquarius ",Date(20, Month::Jan),Date(18,Month::Feb)),
ZodiacSign(" Pisces ",Date(19,Month::Feb),Date(20,Month::Mar)),
ZodiacSign(" Aries ",Date(21,Month::Mar),Date(19,Month::Apr)),
ZodiacSign(" Taurus ",Date(20,Month::Apr),Date(20,Month::May)),
ZodiacSign(" Gemini ",Date(21,Month::May),Date(21,Month::Jun)),
ZodiacSign(" Cancer ",Date(22,Month::Jun),Date(22,Month::Jul)),
ZodiacSign(" Leo ",Date(23,Month::Jul),Date(22,Month::Aug)),
ZodiacSign(" Virgo ",Date(23,Month::Aug),Date(22,Month::Sep)),
ZodiacSign(" Libra ",Date(23,Month::Sep),Date(22,Month::Oct)),
ZodiacSign(" Scorpio ",Date(23,Month::Oct),Date(21,Month::Nov)),
ZodiacSign(" Sagittarius ",Date(23,Month::Nov),Date(21,Month::Dec)),
ZodiacSign(" Capricon ",Date(22,Month::Dec),Date(19,Month::Jan))};
int m;
int d;
for(;;){
//std::cout« (Date(22,Month::Jan)>= Date(23,Month::Jan));


std::cout<< "Month" << std::endl;
std::cin>>m;
if(m <= 0 || m > 12)
{
    throw std::invalid_argument("invalid argument");
}
std::cout<< "Day" <<std::endl;

std::cin>>d;
if(d <= 0 || d > 31)
{
throw std::invalid_argument("invalid argument");
}
Date b(d,static_cast<Month> (m-1));

auto result = _find_if(arr.begin() , arr.end() ,[b](ZodiacSign value )
{
if(value.start >= Date(22,Month::Dec))
{
return true;
}
return b >= value.start && b<= value.end;

});
if(result == arr.end())
{
std::cout<< "error" <<std::endl;
}
else
{
std::cout << result -> name << std::endl;
}

}
return 0;
}
