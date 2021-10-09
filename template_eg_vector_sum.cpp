#include <iostream>
#include <string>
using namespace std;
template <class T>

class vector
{
public:
    T i, j, r1, r2;
    vector(T i, T j)
    {
        this->i = i;
        this->j = j;
    }
    vector(vector v1, vector v2)
    {
        r1 = v1.i + v2.i;
        r2 = v1.j + v2.j;
    }
    void display()
    {
        cout << "the resultant vector is :" << r1 << "i + " << r2 << "j" << endl;
    }
};

int main()
{
    vector<float> v1(3.4, 1.3);
    vector<float> v2(4.3, 7.6);
    vector<float> v3(v1, v2);
    v3.display();

    return 0;
}