#include <iostream>
using namespace std;
class Time
{
public:
    int hour;
    int sec;
    int minute;
    Time(int h, int m, int s)
    {
        hour = h;
        sec = s;
        minute = m;
    }
    void add(Time t1, Time t2)
    {
        sec = t1.sec + t2.sec;
        if (sec >= 60)
        {
            sec = sec % 60;
            minute++;
        }
        minute += t2.minute + t1.minute;
        if (minute >= 60)
        {
            minute = minute % 60;
            hour++;
        }
        hour += t2.hour + t1.hour;
        if (hour >= 24)
        {
            hour = hour % 24;
        }
    }
};
int main()
{
    Time t1(10, 10, 10);
    Time t2(9, 40, 48);
    Time t3(0, 0, 0);
    t3.add(t1, t2);
    cout << "OUTPUT (HH:MM:SS) : " << t3.hour << ":" << t3.minute << ":" << t3.sec << endl;
}

// OUTPUT (HH:MM:SS) : 19:50:58