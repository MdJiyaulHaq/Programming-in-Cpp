
// // this program tell us about  static variables

// // this program is to illustrate that how a static data member maintains its value across the objects of the class

// #include <iostream>
// #include <string>
// using namespace std;

// class employee
// {
// private:
//     string name;
//     static int count; /*the value of count by default is 0. whenever the data of an object is entered this count increases.*/

// public:
//     void setData();
//     void getData();
//
// };

// int employee::count;

// void employee::setData()
// {
//     cout << "enter the name of the employee:" << endl;
//     cin >> name;
//     count++; /* this count is maintained across the objects of the class employee.*/
// }

// void employee::getData()
// {
//     cout << "the name of the employee is:" << name << " and he is employee no." << count << " of the company " << endl;
// }

// int main()
// {
//     employee md, arjun, shankar;
//     md.setData();
//     md.getData();

//     arjun.setData();
//     arjun.getData();

//     shankar.setData();
//     shankar.getData();

//     return 0;
// }











// this program tell us about  static functions.

// this program is to illustrate that how a static data member maintains its value across the objects of the class

#include <iostream>
#include <string>
using namespace std;

class employee
{
private:
    string name;
    static int count; /*the value of count by default is 0. whenever the data of an object is entered this count increases.*/

public:
    void setData();
    void getData();
    static void getCount();
};

int employee::count;

void employee::getCount()
{
    cout << " He is employee no. " << count << endl;
    /* note that the static functions are allowed to acess the static data or other static functions only.*/
    // cout<< " He is employee no. "<<Id<<endl;  this will throw error if Id is used
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
    employee md, arjun, shankar;
    md.setData();
    md.getData();
    employee::getCount(); /* note that static functions can be accessed directly via class they dont need objects to perform.*/

    arjun.setData();
    arjun.getData();
    employee::getCount();

    shankar.setData();
    shankar.getData();
    employee::getCount();

    return 0;
}
