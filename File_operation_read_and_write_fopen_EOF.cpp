#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;

    // writing to the file
    ofstream write;
    write.open("write.txt");
    write << "Begining with the name of Allah .";
    write.close();

    // // reading a word from the file
    // ifstream read;
    // read.open("read.txt");
    // read >> s1;
    // cout << s1 << endl;
    // read.close();

    // reading the entire file
    ifstream read;
    read.open("read.txt");
    while (read.eof() != true)
    {
        getline(read, s2);
        cout << s2 << endl;
    }
    read.close();

    return 0;
}