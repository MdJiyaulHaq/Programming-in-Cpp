
// in the following program we will learn what is multilevel inheritance.

#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    int id;

public:
    string company_name;
    int setId(int);
    int getId();
};

int Vehicle::setId(int i)
{
    id = i;
}

int Vehicle::getId()
{
    cout << "The id of the vehicle is :" << id << endl;
}

class Motorbike : public Vehicle
{
protected:
    float version;

public:
    int getVersion(float);
};

int Motorbike::getVersion(float v)
{
    version = v;
    cout << "The version of the motorbike is :" << version << endl;
}

class Yamaha : public Motorbike
{
private:
    char Model[9] = {"Fz"};

public:
    void display();
};

void Yamaha ::display()
{
    cout << "The model of the motorbike is :" << Model << endl;
}

int main()
{
    Yamaha y1;
    y1.setId(2);
    y1.getId();
    y1.getVersion(2.5);
    y1.display();

    return 0;
}
