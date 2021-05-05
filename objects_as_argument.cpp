
// in this program we will pass an object as an argument to the function 


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
    void sum(complex v1, complex v2)
    {
        a = v1.a + v2.a;
        b = v1.b + v2.b;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.getNum(3, 4);
    c1.printNum();

    c2.getNum(2, 3);
    c2.printNum();

    c3.sum(c1, c2);
    c3.printNum();

    return 0;
}