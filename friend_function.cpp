
// in this program we will see how a function which doesnt belong to the class can acess the data members of the class with the help of friend keyword.

#include <iostream>
#include <string>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void getNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNum()
    {
        cout << "the number is: " << a << "+" << b << "i" << endl;
    }

    friend complex sum(complex v1, complex v2);
};

// complex sum(complex v1, complex v2) the class complex is used as a data type . like  int sum() or float sum() or void sum(). complex sum() is also a function

complex sum(complex v1, complex v2)
{
    /*this function is trying to acess the private data members of class complex which is not allowed*/
    complex c3;
    c3.getNum((v1.a + v2.a), (v1.b + v2.b));
    return c3;
}

int main()
{
    complex c1, c2, c3;
    c1.getNum(3, 4);
    c1.printNum();

    c2.getNum(2, 3);
    c2.printNum();

    c3 = sum(c1, c2);
    c3.printNum();

    return 0;
}

