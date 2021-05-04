

// this is a program illustrating how to swap the values using pointer in cpp 


#include <iostream>
using namespace std;

// this program is not going to give you intended result because the copy of x and y is sent to swap function. this doesnt affect the original value of x and y.

// void swap(int a, int b)
// {
//     int t = a;
//     a = b;
//     b = t;
// }

// int main()
// {
//     int x = 4, y = 5;
//     cout << "The values before swap is x:" << x << ". and y:" << y << endl;
//     swap(x, y);
//     cout << "The values before swap is x:" << x << ". and y:" << y << endl;
// }

// this program satisfies us. a and b referencing the values of x and y.
// for eg:when you call him  Brajesh or Mishra Ji , you are referencing to the same person but by different names

// void swap(int &a, int &b)
// {
//     int t = a;
//     a = b;
//     b = t;
// }

// int main()
// {
//     int x = 4, y = 5;
//     cout << "The values before swap is x:" << x << ". and y:" << y << endl;
//     swap(x, y);
//     cout << "The values before swap is x:" << x << ". and y:" << y << endl;
// }

// a and b takes the adress of x and y. then *pointer a (*a) which is equal to (*&x) is exchanged with *pointer b (*b) which is equal to (*&y)
// and value of adress

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int x = 4, y = 5;
    cout << "The values before swap is x:" << x << ". and y:" << y << endl;
    swap(&x, &y);
    cout << "The values before swap is x:" << x << ". and y:" << y << endl;
}