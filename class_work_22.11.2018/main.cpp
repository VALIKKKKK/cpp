#include <iostream>
//template<
struct sum_if
{
    UP p;
    int result = 0;
    sum_if(UP p)
    {
        p = p;
        result = 0;
    }

};
template <class Iterator,class Func>
Func for_each(Iterator first,Iterator last,Func f){
for( ; first != last ; ++first){
f(*first);
}
return f;
}

int main()
{

int arr[4]{2,3,9,4};

for_each(arr, arr + 4,[](int a){std::cout << a << " ";});

return 0;
}
