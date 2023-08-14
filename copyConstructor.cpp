#include <iostream>
using namespace std;

class Hero
{
private:
public:
    int health;
    char level;

    // default constructor
    Hero()
    {
        cout << "default constructor called " << health << endl;
    }

    // parameterized constructor
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
        cout << "Hero is created with \nhealth = " << health << "\nand level = " << level << endl;
    }

    // copy constructor
    Hero(const Hero &other)
    {
        this->health = other.health;
        this->level = other.level;
        cout << "Copy constructor called with \nhealth = " << health << "\nand level = " << level << endl;
    }
};

int main()
{
    Hero A(10, 'B');
    Hero B(A); // copy constructor called
    return 0;
}