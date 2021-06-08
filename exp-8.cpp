#include <iostream>
using namespace std;
class A
{
    int a;
    int b;
    int sum;

public:
    A(int a, int b)
    {
        sum = a + b;
    }
    friend class B;
};
class B
{
public:
    void output(A &obj)
    {
        cout << "Sum of (8, 12) using friend class: " << obj.sum << endl;
    }
};
int main()
{
    A obj(8, 12);
    B obj1;
    obj1.output(obj);
}