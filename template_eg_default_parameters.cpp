#include <iostream>
#include <string>
using namespace std;

template <class T1 = string, class T2 = int, class T3 = float>
class student
{
public:
    T1 name;
    T2 roll;
    T3 result;
    student(T1 name, T2 roll, T3 result)
    {
        this->name = name;
        this->roll = roll;
        this->result = result;
    }
    void display()
    {
        cout << "The name of student is :" << name << endl;
        cout << "The roll no. of student is :" << roll << endl;
        cout << "The result of the student :" << result << endl;
    }
};
int main()
{
    student<> s("Md", 15, 78.9);
    s.display();
    cout << endl;

    //if you want to change data type
    student<string, int, string> s1("Md", 15, "Good marks,need some improvement");
    s1.display();
    return 0;
}