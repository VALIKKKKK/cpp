#include <stdio.h>
#include <stdlib.h>
struct A
{
    int a;
    int b;

};
int A_get_sum(struct A* this)
{
    return (*this).a + (*this).b;
}
/** class A
{
    int a;
    int b;
    int get_sum()
    {
        return a+b;
    }


}**/
int main()
{

    printf("Hello world!\n");
    return 0;
}
