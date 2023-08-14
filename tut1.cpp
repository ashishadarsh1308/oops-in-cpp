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

   
};

int main()
{
    // static allocation
    Hero bhaskar;

    // dynamic allocation
    Hero *A = new Hero();

    A->setHealth(10);
    (*A).level = 'D'; // another way to access

    cout << A->getHealth() << endl;
    cout << (*A).level << endl;

    bhaskar.setHealth(12);
    bhaskar.level = 'A';

    cout << bhaskar.getHealth() << endl;
    cout << bhaskar.level;

    return 0;
}