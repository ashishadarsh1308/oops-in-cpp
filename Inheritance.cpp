#include <iostream>
using namespace std;

class Human
{
public:
    int age;
    int weight;
    int height;

public:
    void setAge(int newAge)
    {
        age = newAge;
    }

    void setWeight(int newWeight)
    {
        weight = newWeight;
    }

    void setHeight(int newHeight)
    {
        height = newHeight;
    }

    int getWeight()
    {
        return this->weight;
    }
    int getHeight()
    {
        return this->height;
    }
};

class Male : private Human
{
public:
    int bmi;

public:
    int getBmi()
    {
        return this->bmi;
    }
    int getAge()
    {
        return this->age;
    }
    void setAge(int newAge)
    {
        age = newAge;
    }
    void setBmi(int newBmi)
    {
        bmi = newBmi;
    }
};

int main()
{
    Male Bhaskar;

    Bhaskar.setAge(20);
    // Bhaskar.setWeight(60);
    // Bhaskar.setHeight(5.8);
    Bhaskar.setBmi(20);

    cout << "Age: " << Bhaskar.getAge() << endl;
    // cout << "Weight: " << Bhaskar.getWeight() << endl;
    // cout << "Height: " << Bhaskar.getHeight() << endl;
    cout << "BMI: " << Bhaskar.getBmi() << endl;
}