#ifndef MYPET_H_INCLUDED
#define MYPET_H_INCLUDED

struct Pet
{
private:
    int m_health;
    int m_happiness;
    int m_staruness;
    int m_weight;
public:

    Pet():Pet(100)
    {


    }

    Pet(int health):Pet(health,100) {}
    Pet(int health, int happiness):Pet(health,happiness,0) {}
    Pet(int health, int happiness, int staruness):Pet(health,happiness,staruness,70) {}
    Pet(int health, int happiness, int staruness, int weight)
    {
        set_health(health);
        set_happiness(happiness);
        set_staruness(staruness);
        set_weight(weight);
    }
    void set_health(int health);
    int get_health();
    void set_happiness(int happiness);
    int get_happiness();
    void set_staruness(int staruness);
    int get_staruness();
    void set_weight(int weight);
    virtual void say() {}
};
void Pet::set_health(int health)
{
    if(health>101||health<0)
    {
        throw std::invalid_argument("health must to be 0-100");
    }
    m_health=health;
}
void Pet::set_happiness(int happiness)
{
    if(happiness>101||happiness<0)
    {
        throw std::invalid_argument("poshel ti");
    }
    m_happiness=happiness;
}
int Pet::get_happiness()
{
    return m_happiness;
}
int Pet::get_health()
{
    return m_health;
}
void Pet::set_staruness(int staruness)
{
    if(staruness<0)
    {
        throw std::invalid_argument("you died how LIL PEEP");
    }
    else if(staruness>21)
    {
        throw std::invalid_argument("perezhral");
    }
    m_staruness=staruness;
}
int Pet::get_staruness()
{
    return m_staruness;
}
void Pet::set_weight(int weight)
{
    m_weight=weight;
}
struct Gray:Pet
{
    int charisma;
    virtual void say()
    {
        std::cout << "Gav Gav" << std::endl;
    }

};
struct Dima:Pet
{
    void say()
    {
        std::cout << "Stop smoking" << std::endl;
    }
};
#endif // MYPET_H_INCLUDED
