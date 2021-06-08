#include <iostream>
using namespace std;
class student
{
private:
    char name[20];
    char branch[10];
    int rn;
    float marks[5];

public:
    float percentage;
    void percent()
    {
        float sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }
        percentage = (sum / 500) * 100;
    };
    void input()
    {
        cout << "Enter Name:";
        cin >> name;
        cout << "Enter Branch:";
        cin >> branch;
        cout << "Enter Roll No.:";
        cin >> rn;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter marks in subject " << i + 1 << "(out of 100):";
            cin >> marks[i];
        }
    };
    void output()
    {
        cout << "Name:" << name << endl;
        cout << "Roll Number:" << rn << endl;
        cout << "Percentage:" << percentage << endl;
    };
};

int main()
{
    student s[10];
    int n;
    cout << "Enter number of records to be entered:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        s[j].percent();
        if (s[j].percentage >= 85)
        {
            s[j].output();
        }
    }
}

// Enter number of records to be entered:2
// Enter Name:Gauransh
// Enter Branch:CSE
// Enter Roll No.:00396407220
// Enter marks in subject 1(out of 100):95
// Enter marks in subject 2(out of 100):97
// Enter marks in subject 3(out of 100):88
// Enter marks in subject 4(out of 100):93
// Enter marks in subject 5(out of 100):90
// Enter Name:Foo
// Enter Branch:ECE
// Enter Roll No.:00478488655
// Enter marks in subject 1(out of 100):75
// Enter marks in subject 2(out of 100):65
// Enter marks in subject 3(out of 100):55
// Enter marks in subject 4(out of 100):40
// Enter marks in subject 5(out of 100):41

// Name:Gauransh
// Roll Number:396407220
// Percentage:92.6