#include <iostream>
#include <string>
using namespace std;

template <class T>
class vector
{
public:
    int size;
    T *array;
    vector(int size)
    {
        this->size = size;
        array = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d = d + (this->array[i] * v.array[i]);
        }
        return d;
    }
};

int main()
{
    vector<int> v1(3);
    v1.array[0] = 1;
    v1.array[1] = 1;
    v1.array[2] = 1;

    vector<int> v2(3);
    v2.array[0] = 3;
    v2.array[1] = 2;
    v2.array[2] = 5;

    int z = v1.dotProduct(v2);
    cout << "the dot product is :" << z << endl;


    // vector<float> v1(2);
    // v1.array[0] = 7.1;
    // v1.array[1] = 4.5;

    // vector<float> v2(2);
    // v2.array[0] = 8.2;
    // v2.array[1] = 3.9;

    // float z = v1.dotProduct(v2);
    // cout << "the dot product is :" << z << endl;

    return 0;
}