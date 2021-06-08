#include <iostream>
using namespace std;
class student
{
private:
    string name;
    string branch;
    int rn;
    float marks[5];
    float total = 0;

public:
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
            total += marks[i];
        }
    };
    void output()
    {
        cout << "Name:" << name << endl;
        cout << "Branch:" << branch << endl;
        cout << "Roll:" << rn << endl;
        cout << "Total:" << total << endl;
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
        s[j].output();
        cout << endl;
    }
}

// Output
// Enter number of records to be entered:2
// Enter Name:Gauransh
// Enter Branch:CSE
// Enter Roll No.:00396407220
// Enter marks in subject 1(out of 100):95
// Enter marks in subject 2(out of 100):90
// Enter marks in subject 3(out of 100):88
// Enter marks in subject 4(out of 100):93
// Enter marks in subject 5(out of 100):97
// Enter Name:Foo
// Enter Branch:ECE
// Enter Roll No.:00493891209
// Enter marks in subject 1(out of 100):78
// Enter marks in subject 2(out of 100):58
// Enter marks in subject 3(out of 100):68
// Enter marks in subject 4(out of 100):85
// Enter marks in subject 5(out of 100):56

// Name:Gauransh
// Branch:CSE
// Roll:396407220
// Total:463

// Name:Foo
// Branch:ECE
// Roll:493891209
// Total:345
