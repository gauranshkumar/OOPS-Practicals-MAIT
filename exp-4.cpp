#include <iostream>
using namespace std;
void area(int h, int b)
{
    int area;
    area = (h * b) / 2;
    cout << "AREA : " << area << " sq. units" << endl;
}
void area(float r)
{
    float area;
    area = 3.14 * r * r;
    cout << "AREA=" << area << " square units";
}
void area(float l, float b)
{
    float area;
    area = l * b;
    cout << "AREA=" << area << " square units";
}
int main()
{
    float a, b, c;
    int h, base;
    int ch;
    cout << "1.Area of Triangle" << endl;
    cout << "2.Area of Circle" << endl;
    cout << "3.Area of Rectangle" << endl;
    cout << "Enter choice:";
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "Enter height: ";
        cin >> h;
        cout << "Enter base: ";
        cin >> base;
        area(h, base);
        break;
    case 2:
        cout << "Enter radius: ";
        cin >> a;
        area(a);
        break;
    case 3:
        cout << "Enter length: ";
        cin >> a;
        cout << "Enter breadth: ";
        cin >> b;
        area(a, b);
        break;
    default:
        cout << "Wrong choice";
    }
}
