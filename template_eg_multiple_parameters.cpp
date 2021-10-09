#include <iostream>
#include <string>
using namespace std;

template <class T1, class T2>
class student
{
public:
    T1 name;
    T2 roll;

    void display()
    {
        cout << "The name of student is:" << name << endl;
        cout << "The roll no. of student is:" << roll << endl;
    }
};
int main()
{
    student<string, int> s;
    s.name = "Md";
    s.roll = 15;
    s.display();

    return 0;
}