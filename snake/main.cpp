#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
using namespace std;
bool game_over;
const int widht = 50;
const int height = 20;
int x, y, fruit_x, fruit_y, score;
enum eDirection { stop = 0, Left, Right, Up, Down};
eDirection dir;

void setup()
{
    game_over = false;
    dir = stop;
    x = widht / 2 - 1;
    y = height / 2 - 1;
    fruit_x = rand() % widht;
    fruit_y = rand() % height;
    score = 0;
}
void draw()
{
    system("cls");
    for (int i = 0; i < 1 + widht; ++i)

        cout << "*";
    cout << endl;
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < widht; ++j)
        {
            if(j == 0 || j == widht - 1 )
            {
                cout << "*";

            }
            if(i == y && j == x)
            {
                cout << "0";
            }
            else if(i == fruit_y && j == fruit_x)
            {
                cout << "f";
            }
            else
            {
                cout << " ";
            }


        }

        cout << endl;
    }
    for (int i = 0; i < 1+widht; ++i)
    {
        cout << "*";
    }
    cout << endl;
}
void input()
{
    if(_kbhit())
    {
        switch(_getch())
        {
        case '4':
            dir = Left;
            break;
        case '8':
            dir = Up;
            break;
        case '5':
            dir = Down;
            break;
        case '6':
           dir = Right;
            break;
        case '+':
            game_over = true;
            break;
        }
    }
}
void logic()
{
    switch(dir)
    {
    case Left:
        x--;
    break;
    case Up:
        y--;
    break;
    case Down:
        y++;
    break;
    case Right:
        x++;
    break;

    }
}
int main()
{
    setup();
    while (!game_over)
    {
        draw();
        input();
        logic();
    }
    cout << "Thanks for playing!" << endl;
    return 0;
}
