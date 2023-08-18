#include <iostream>
using namespace std;

class Human
{

public:
    int leg;

public:
    void speak()
    {
        cout << "I am speaking" << endl;
    }
};

class Animal
{

public:
    int eye;

public:
    void speak()
    {
        cout << "I am barking" << endl;
    }
};

class Bhaskar : public Human, public Animal
{
public:
    void setEye(int eyes)
    {
        eye = eyes;
    }
    void getEye()
    {
        cout << this->eye << " eyes" << endl;
    }
};

int main()
{
    Bhaskar bhavisya;
    bhavisya.setEye(23);
    bhavisya.getEye();
    bhavisya.Human::speak();  // Calling the speak function from the Human class
    bhavisya.Animal::speak(); // using scope resolution
}