#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int roll;
    bool gender;

    void printInfo()
    {
        cout << "name:";
        cout << name << endl;
        cout << "roll:";
        cout << roll << endl;
        cout << "gender:";
        cout << gender << endl;
    }
};

int main()
{

    int count;
    cout << "For how many students you want to enter the data?" << endl;
    cin >> count;
    student arr[count];
    for (int i = 0; i < count; i++)
    {
        cout << "enter the name of student:" << i + 1 << endl;
        cin >> arr[i].name;
        cout << "enter the roll number of student:" << i + 1 << endl;
        cin >> arr[i].roll;
        cout << "enter the gender of student:" << i + 1 << endl;
        cin >> arr[i].gender;
    }
    for (int i = 0; i < count; i++)
    {
        arr[i].printInfo(); /* code */
    }

    return 0;
}