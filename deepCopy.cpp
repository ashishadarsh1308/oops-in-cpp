#include <iostream>
#include <cstring>
using namespace std;

class Hero
{
private:
public:
    int *health; // Using a pointer to simulate dynamically allocated memory
    char *name;

    // default constructor
    Hero()
    {
        health = new int(0); // Initialize health with dynamic memory allocation
        name = new char[10]; // Initialize name with dynamic memory allocation
        strcpy(name, "Default");
        cout << "Default constructor called for " << name << endl;
    }

    // parameterized constructor
    Hero(int h, const char *n)
    {
        health = new int(h);            // Initialize health with dynamic memory allocation
        name = new char[strlen(n) + 1]; // Initialize name with dynamic memory allocation
        strcpy(name, n);
        cout << "Parameterized constructor called for " << name << " with health " << *health << endl;
    }

    // copy constructor
    Hero(const Hero &other)
    {
        health = new int(*(other.health));       // Deep copy health
        name = new char[strlen(other.name) + 1]; // Deep copy name
        strcpy(name, other.name);
        cout << "Copy constructor called for " << name << " with health " << *health << endl;
    }
};

int main()
{
    Hero A(100, "Superman");
    Hero B(A); // Copy constructor
    A.health = new int(50);
    cout << "A.health = " << *A.health << endl;
    cout << "B.health = " << *B.health << endl;

    return 0;
}
