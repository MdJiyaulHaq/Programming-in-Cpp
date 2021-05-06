
// we will make a program to calculate the distance between any two points in space using  parameterized constructor

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class point
{
private:
    int x, y, z;

public:
    point(int, int, int);
    void printPoint()
    {
        cout << "The point is: (" << x<<"," << y <<","<< z << ")" << endl;
    }
    friend int distance(point , point );
};

point ::point(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}

int distance(point c1, point c2)
{
    int d1 = c2.x - c1.x;
    int d2 = c2.y - c1.y;
    int d3 = c2.z - c1.z;
    float d = sqrt((d1) * (d1) + (d2) * (d2) + (d3) * (d3));
    cout << "The distance between the points is:" << d << endl;
}

int main()
{
    //Implicit call;
    point c1(8, 0, 0);
    point c2(8, 3, 4);

    c1.printPoint();
    c2.printPoint();
    
    distance(c1,c2);
    return 0;
}
