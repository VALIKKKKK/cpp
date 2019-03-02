#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sweet=1000;
    double cookies=1000;

    double sweet_price=5;
    double cookies_price=10;

    double purchase1=0;
    double purchase2=0;

    purchase1=(sweet_price*300/1000)+(cookies_price*400/1000);
    purchase2=(sweet_price*1800/1000)+(cookies_price*2000/1000);
    purchase2=purchase2*3;
    printf("%f\n",purchase1);
    printf("%f\n",purchase2);
    return 0;
}
