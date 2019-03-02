#include <iostream>

using namespace std;
class Man
{
public:
    std::string name;
    std::string surname;
    void setName(std::string newName)
    {
        name = newName;
    }
    std::string getName()
    {
        return name;
    }
    void setSurname(std::string newSurname)
    {
        name = newSurname;
    }
    std::string getSurname()
    {
        return surname;
    }

};
class idCard
{

};
class Employ:public Man
{
public:
std::string position;
idCard card;
std::string room;
std::string department;
std::string past_position;
    Employee(std::string n, std::string s, std::string p)
    {
        name = n;
        surname = s;
        position = p;
    }
    void setPosition(std::string newProfession)
    {
        position = newProfession;
    }
std::string getPosition()
    {
        return position;
    }

};
int main()
{
    Employ a;
    a.setName("Valik");
    cout << a.name << endl;
    return 0;
}
