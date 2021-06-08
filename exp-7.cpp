#include <iostream>
using namespace std;
class A
{
    int First;
    int Second;

public:
    A(int one, int two)
    {
        First = one;
        Second = two;
    }
    friend class B;
};
class B
{
public:
    int big;
    void bigger(A &Name)
    {
        if (Name.First > Name.Second)
        {
            big = Name.First;
        }
        else
        {
            big = Name.Second;
        }
    }
};
int main()
{
    A Name(5, 980);
    B B1;
    B1.bigger(Name);
    cout << "Bigger element among (5, 980) is: " << B1.big << endl;
}