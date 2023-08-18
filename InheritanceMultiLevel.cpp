// making Multi-level inheritance
#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void setAge(int newAge)
    {
        age = newAge;
    }

    void setWeight(int newWeight)
    {
        weight = newWeight;
    }

    int getAge()
    {
        return this->age;
    }
    int getWeight()
    {
        return this->weight;
    }
};

class Dog : public Animal
{
public:
    string breed;
    string color;

public:
    void setBreed(string newBreed)
    {
        breed = newBreed;
    }

    void setColor(string newColor)
    {
        color = newColor;
    }

    string getBreed()
    {
        return this->breed;
    }
    string getColor()
    {
        return this->color;
    }
    int getage()
    {
        return this->age;
    }
};

class GermanShepherd : public Dog
{
public:
    string name;
    string owner;

public:
    void setName(string newName)
    {
        name = newName;
    }

    void setOwner(string newOwner)
    {
        owner = newOwner;
    }

    string getName()
    {
        return this->name;
    }
    string getOwner()
    {
        return this->owner;
    }
};

int main()
{
    GermanShepherd gs1;
    gs1.setAge(10);
    gs1.setWeight(20);
    gs1.setBreed("German Shepherd");
    gs1.setColor("Black");
    gs1.setName("Tommy");
    gs1.setOwner("Rahul");

    cout << "Age: " << gs1.getage() << endl;
    cout << "Weight: " << gs1.getWeight() << endl;
    cout << "Breed: " << gs1.getBreed() << endl;
    cout << "Color: " << gs1.getColor() << endl;
    cout << "Name: " << gs1.getName() << endl;
    cout << "Owner: " << gs1.getOwner() << endl;

    return 0;
}