#include <iostream>
using namespace std;

class student
{
    string name;
    int roll;

public:
    int setData(string s, int r)
    {
        name = s;
        roll = r;
    }
    void getData()
    {
        cout << "Name of Student is:" << name << endl;
        cout << "Roll no. of Student is:" << roll << endl;
    }
};

int main()
{
    int count = 3, i = 1, q;
    string p;
    student *ptr = new student[count];
    student *ptr2 = ptr;
    for (int i = 0; i < count; i++)
    {
        cout << "Enter the Name of student:" << i + 1 << endl;
        cin >> p;
        cout << "Enter the Roll no. of student:" << i + 1 << endl;
        cin >> q;
        ptr->setData(p, q);
        ptr++;
    }
    for (int i = 0; i < count; i++)
    {
        cout << "The details of student:" << i + 1 << endl;
        ptr2->getData();
    }

    return 0;
}