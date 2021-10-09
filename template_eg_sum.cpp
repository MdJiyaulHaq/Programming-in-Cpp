#include <iostream>
#include <string>
using namespace std;
template <class T>

class sum
{
public:
    T a, b;
    sum(T a, T b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout<<"the sum is :"<<(a +b)<<endl;
    }
};

int main()
{
    sum <int>s1(3, 5);
    s1.display();
    sum <float>s2(3.5,6.2);
    s2.display();
    sum <long double>s3(3456784567,7863456456);
    s3.display();

    return 0;
}