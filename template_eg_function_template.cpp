#include <iostream>
#include <string>
using namespace std;

template <class T>
class Md
{
public:
    T s;
    Md(T s)
    {
        this->s = s;
    }
    void display();
};

template <class T>
void Md<T>::display()
{
    cout << s << endl;
}

template <class T>
void fun(T a)
{
    cout << "Hello :" << a << endl;
}

void fun(int a)
{ // this is given more preference than template when exact data type is found
    cout << "Hello :" << a << endl;
}
int main()
{
    // Md<string> m("I am MD.");
    // m.display();

    // Md<int> m(786);
    // m.display();

    Md<float> m(786.92);
    m.display();

    fun(5);

    return 0;
}