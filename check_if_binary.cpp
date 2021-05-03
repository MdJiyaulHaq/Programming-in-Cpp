
// this program is to illustrate the nesting of member functions of a class

#include <iostream>
using namespace std;

class check_if_binary
{
private:
    string s;

public:
    void read();
    void display();
    void display2();
    void check();
    void complement();
};

void check_if_binary::read()
{
    cout << "Enter a binary number:" << endl;
    cin >> s;
}

void check_if_binary::display()
{
    cout << "The number you entered is:";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
void check_if_binary::display2()
{
    cout << "The compliment binary number is:";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

void check_if_binary::check()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "The number you entered is not binary." << endl;
            exit(0);
        }
    }
    // here we have called display function(private or public) inside a function check . both these functions belongs to the same class.
    display();
}

void check_if_binary::complement()
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    display2();
}

int main()
{
    check_if_binary b;
    b.read();
    b.check();
    b.complement();
    return 0;
}