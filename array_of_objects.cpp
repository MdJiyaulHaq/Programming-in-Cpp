
#include <iostream>
#include <string>
using namespace std;

class employee
{
private:
    string name;
    static int count;

public:
    void setData();
    void getData();
    static void getCount();
};

int employee::count;

void employee::getCount()
{
    cout << " He is employee no. " << count << endl;
}

void employee::setData()
{
    cout << "enter the name of the employee:" << endl;
    cin >> name;
    count++; /* this count is maintained across the objects of the class employee.*/
}

void employee::getData()
{
    cout << "the name of the employee is:" << name << endl;
}

int main()
{
    //     employee md, arjun, shankar;

    //      /*if there are too many employee in the company the this method is time costly.*/

    //     md.setData();
    //     md.getData();
    //     employee::getCount();

    //     arjun.setData();
    //     arjun.getData();
    //     employee::getCount();

    //

    employee al_jazera[5];
    for (int i = 0; i < 5; i++)
    {
        al_jazera[i].setData();
        al_jazera[i].getData();
        employee::getCount();
    }

    return 0;
}
