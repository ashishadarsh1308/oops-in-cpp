#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    // setter
    void setHealth(int h)
    {
        health = h;
    }

    // getter
    int getHealth()
    {
        return health;
    }

    // parameterized constructor
    Hero(int health)
    {
        this->health = health;
        cout << "Hero is created with health " << health << endl;
    }
};

int main()
{
    // dynamic allocation
    Hero *A = new Hero(10);

    // accessing member function and variable
    (*A).level = 'D';    // another way to access

    cout << A->getHealth() << endl;
    cout << (*A).level << endl;

    return 0;
}