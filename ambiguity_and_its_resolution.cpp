
// we are going to learn about the ambiguity in inheritance .

// we will learn to solve the ambiguity .

#include <iostream>
#include <string>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "In the name of Allah, who is most merciful." << endl;
    }
};
class B
{
public:
    void display()
    {
        cout << "We surely belong to Allah and to him we shall return." << endl;
    }
};

class C : public A, public B
{
public:
    void display()
    {
        B ::display(); /*  this 4 block of code is to tell to the compiler which class to choose from. here it chooses from B*/
    }

    // void display()
    // {
    //     A ::display();
    // }
};

int main()
{
    A a1;
    B b1;
    C c1;
    a1.display();
    b1.display();
    c1.display();

    /* this will confuse compiler as there are two display methods and this will throw an error.*/

    return 0;
}

/*



the program below contains an ambiguity that compiler solves by itself

#include <iostream>
#include <string>
    using namespace std;

class A
{
public:
    void display()
    {
        cout << "In the name of Allah, who is most merciful." << endl;
    }
};
class B
{
public:
    void display()
    {
        cout << "There is not god but Allah." << endl;
    }
};

class C : public A, public B
{
public:
    void display()
    {
        cout << "We surely belong to Allah and to him we shall return." << endl;
    }
};

int main()
{
    A a1;
    B b1;
    C c1;
    a1.display();
    b1.display();
    c1.display();
    // in this case compiler fixed ambiguity by running the display method of class which the object is from.

    return 0;
}

*/
