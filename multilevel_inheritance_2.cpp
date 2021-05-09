
// in the following program we will learn more on multilevel inheritance.

#include <iostream>
#include <string>
using namespace std;

class student
{
protected:
    int id;

public:
    int setId(int);
    int getId();
};

int student ::setId(int i)
{
    id = i;
}

int student ::getId()
{
    cout << "The id of the student is :" << id << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;
    float cpp;

public:
    int setMarks(float, float, float);
};

int exam ::setMarks(float m1, float m2, float m3)
{
    physics = m1;
    maths = m2;
    cpp = m3;
}

class result : public exam
{
private:
    float r;

public:
    int calculate_result();
    void display_result();
};

int result::calculate_result()
{
    r = (physics + maths + cpp) / 3;
    return r;
}

void result ::display_result()
{
    cout << "The mark of student is:" << r << "%" << endl;
}

int main()
{
    result md;
    md.setId(15);
    md.getId();
    md.setMarks(85, 93, 83);
    md.calculate_result();
    md.display_result();

    return 0;
}
