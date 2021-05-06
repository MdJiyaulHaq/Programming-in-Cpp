
// in this programme we will learn how to use parameterized constructor

#include <iostream>
#include <string>
using namespace std;

class complex
{
private:
    int a, b;

public:
    complex(int, int);
    void printNum()
    {
        cout << "the number is: " << a << "+" << b << "i" << endl;
    }
};

complex ::complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    //Implicit call;
    complex c1(4, 2);
    // here values of paramaters is given implicitly

    //Explicit call;
    complex c2 = complex(3, 5);
    // here values of paramaters is given Explicitly

    c1.printNum();
    c2.printNum();

    return 0;
}
