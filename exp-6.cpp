#include <iostream>
using namespace std;
class Greatest
{
    int a;
    int b;
    int c;

public:
    Greatest(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    friend int greatest(Greatest g);
};
int greatest(Greatest g)
{
    if (g.a > g.b && g.a > g.c)
        return g.a;
    else if (g.b > g.c && g.b > g.a)
        return g.b;
    else
        return g.c;
}
int main()
{
    Greatest g1(30, 40, 90);
    int big = greatest(g1);
    cout << "Greatest of (30, 40, 90): " << big << endl;
}