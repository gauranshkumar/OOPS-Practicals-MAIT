#include <iostream>
using namespace std;
inline int square(int s)
{
    return s * s;
}
int main()
{
    cout << "The square of 8 is: " << square(8) << endl;
    return 0;
}