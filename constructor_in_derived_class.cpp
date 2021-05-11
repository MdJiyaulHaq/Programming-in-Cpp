
// program to show how constructor is invoked in derived class.

#include <iostream>
#include <string>
using namespace std;

class Alpha
{
private:
    int x;

public:
    Alpha(int i)
    {
        x = i;
        cout << "Alpha initialized" << endl;
    }
    int print_x()
    {
        cout << x << endl;
    }
};

class Beta
{
private:
    int y;

public:
    Beta(int i)
    {
        y = i;
        cout << "Beta initialized" << endl;
    }
    int print_y()
    {
        cout << y << endl;
    }
};

/*
order of excution is
.....alpha,beta , gamma
if position of alpha and gamma are interchanged the order also changes
.....beta,alpha, gamma
if one of the class is virtual then it will be given precidence irrespective of its position
.....virtual class, other class, gamma
*/

class Gamma : public Alpha, public Beta
{
private:
    int p, q;

public:
    Gamma(int a, int b, int c, int d) : Alpha(a), Beta(b)
    {
        p = c;
        q = d;
        cout << "Gamma initialized" << endl;
    }
    int print_pq()
    {
        cout << p << endl;
        cout << q << endl;
    }
};

int main()
{
    Gamma g(5, 1, 9, 7);
    g.print_x();
    g.print_y();
    g.print_pq();

    return 0;
}
