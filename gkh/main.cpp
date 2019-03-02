#include <iostream>

using namespace std;
int min_index(int*arr,int start,int last)
{
    int m_value=arr[start];
	int m_index=start;
	for (int i=start;i<last;++i)
    {
        if(m_value>arr[i])
        {
            m_value=arr[i];
            m_index=i;
        }
    }
    return m_index;
}
int max_index(int*arr,int start,int last)
{
    int ma_value=arr[start];
    int ma_index=start;
    for(int i=start;i<last;++i)
    {
        if(ma_value<arr[i])
        {
            ma_value=arr[i];
            ma_index=i;
        }
    }
    return ma_index;
}
int main()
{

    int arr[10]={5,3,6,4,7,8,0,1,2,10};
   int a=min_index(arr,1,10);
   int b=max_index(arr,1,10);
    cout << a << endl;
    cout << b << endl;
    return 0;
}
