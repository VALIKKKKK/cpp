#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutes=60;
    int km=10;
    int m=0;
    int m_per_sec=0;
    int sec=0;
    m=km*1000;
    sec=minutes*60;
    m_per_sec=m/sec;
    printf("%d\n",m_per_sec);
    return 0;
}
