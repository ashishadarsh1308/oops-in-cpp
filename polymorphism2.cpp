// polymorphism implementation
// compile time polymorphism
// operator overloading

#include <iostream>
using namespace std;

class A
{
public:
    int a;
    int b;

    void operator+(A &obj)
    {
        int val1 = this->a;
        int val2 = obj.a;
        cout << "Output is : " << val1 - val2 << endl;
    }
};

int main()
{
    A obj1;
    A obj2;

    obj1.a = 5;
    obj2.a = 12;

    obj2 + obj1;
    
    return 0;
}