// polymorphism implementation
// compile time polymorphism
// function overloading

#include <iostream>
using namespace std;

class A
{
public:
    void add(int a, int b)
    {
        cout << a + b << endl;
    }
    void add(int a, int b, int c)
    {
        cout << a + b + c << endl;
    }
    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    A ab;
    ab.add(3, 4);
    ab.add(2, 4, 5);
    double num = ab.add(2.5, 1.53);
    cout << num;
    return 0;
}