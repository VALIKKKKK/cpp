#ifndef TASKS_H_INCLUDED
#define TASKS_H_INCLUDED

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void increase(int& a, int& b, int& c)
{
    std::vector<int> arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    std::sort(arr.begin(), arr.end(), [](int a, int b){
              return a > b;});
    a = arr[0];
    b = arr[1];
    c = arr[2];
}


int get_after_point(double a, int k)
{
    a = a - (int)a;
    return a * pow(10, k);
}

int counter(double a, int k)
{
    int temp = 0;
    int a1 = get_after_point(a,k);
    while(a1)
    {
       if(a1%10 == 9)
       {
           ++temp;
       }
       a1 /= 10;
    }
    return temp;
}

bool arithmetic_progression(double a)
{
    int a1 = get_after_point(a, 8);
    int d = (a1/10)%10 - a1 % 10;
    while(a1)
    {
        if((a1 / 10) % 10 - (a1 % 10) != d)
        {
            return false;
        }
        a1 = a1 / 10;

    }
    return true;
}

double pow_(int a)
{
    return pow(a,2);
}

int decreasing_sequence(int* arr, int size)
{
    int temp = 0;
    int temp1 = 0;
    for(int i = 0; i < size; ++i)
    {

        if((arr[i] / 5) == arr[i + 1])
        {
            ++temp;
            if(temp1<temp)
            {
               temp1 = temp;
            }
        }
        else
        {
            temp = 0;
        }
    }
    return temp1;

}
#endif // TASKS_H_INCLUDED
