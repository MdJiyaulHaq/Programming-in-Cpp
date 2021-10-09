#include <iostream>
using namespace std;

int main()
{
    //Basic example
    int a = 7;
    int *ptr = &a;
    cout << "The value at address of a is:" << *(ptr) << endl;

    // new operator
    // int* ptr1= new int(13);
    float *ptr1 = new float(13.6);

    delete ptr1; // delete operator.

    cout << "The value at address ptr1 is:" << *(ptr1) << endl;

    int *array = new int[3]; // array of three new pointers are created.
    array[0] = 5;          // these values can easily be set and displayed using loops
    *(array + 1) = 9;        //this method of declaration is also allowed
    array[2] = 2;

    delete[] array; // to delete whole array [] is used

    cout << "The value at array[0] is:" << array[0] << endl;
    cout << "The value at array[1] is:" << array[1] << endl;
    cout << "The value at array[2] is:" << array[2] << endl;

    return 0;
}