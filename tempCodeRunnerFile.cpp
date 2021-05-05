
// in this program we will see how a function which belong to a class can acess the data members of the other class with the help of friend keyword.

// in this program we will see how a class can acess the data members of the other class with the help of friend keyword.

#include <iostream>
#include <string>
using namespace std;

class complex;
class calculator
{
public:
    int sumReal(complex, complex);
    int sumComplex(complex, complex);
};

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

    // friend int calculator::sumReal(complex v1, complex v2);
    // friend int calculator::sumComplex(complex v1, complex v2);

    /*if there are say 100 functions then this will be time consuming for us to make each and every functions friend. rather we will make the whole class as friend.*/

    // alternatively
    friend class calculator;
};

int calculator::sumReal(complex v1, complex v2)
{
    return (v1.a + v2.a);
}

int calculator::sumComplex(complex v1, complex v2)
{
    return (v1.b + v2.b);
}

int main()
{
    complex c1, c2, c3;
    c1.getNum(3, 4);
    c1.printNum();

    c2.getNum(2, 3);
    c2.printNum();

    calculator realPart, complexPart;
    int x = realPart.sumReal(c1, c2);
    cout << "the real part of the sum is:" << x << endl;

    int y = complexPart.sumComplex(c1, c2);
    cout << "the complex part of the sum is:" << y << endl;
    return 0;
}