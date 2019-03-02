#include <iostream>

using namespace std;
class Integer
{
public:
    int value = 4;
    Integer() = default;
    Integer(int v):value(v) {}
    Integer operator= (Integer& that)
    {
        this->value = that.value;
        return *this;
    }
    Integer operator+ (Integer that)
    {
        return Integer(this->value+that.value);
    }
    operator bool()
    {
        return value != 0;
    }
    bool operator==(Integer& that)
    {
        return this->value == that.value;
    }
    operator int()
    {
        cout << "operator int" << endl;
        return this->value;

    }
};
int main()
{
    Integer a = 1;
    if (a)
        cout << "Hello world!" << endl;
    int b = (int)a;
    return 0;
}
