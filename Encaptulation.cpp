#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int age;

public:
    student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    student s1("Rahul", 20);
    s1.display();
    return 0;
}