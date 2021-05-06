
// in this programme we will learn what is destructor

#include <iostream>
#include <string>
using namespace std;

class number
{
private:
    int a;

public:
    number()
    {
        a = 4;
        cout << "the memory occupied by (a) will be released after printing its value i.e." << a << endl;
    }

    ~number() /* constructor and destructor both should be define in public and not private.*/
    {
        cout << "this is to show that destructor is invoked at the end too."<<endl;
        // note: if compiler doesn't find user defined destructor then it creates one by its own.
    }
};

int main()
{

    number n;

    n.~number();

    /* this is also a way to invoke destructor. it will also be automatically invoked after the termination of the program. */

    return 0;
} //  after this } bracket destructor is invoked .
