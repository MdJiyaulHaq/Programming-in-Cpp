#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main()
{
    // read the string and output the file content.
    string s1, s2;
    ifstream readAndOut("read.txt");
    // readAndOut>>s1;              // this will just read and print a word
    // cout << s1 << endl;

    getline(readAndOut, s1); // this will read and print a line
    cout << s1 << endl;
    getline(readAndOut, s2); // this will read and print second line
    cout << s2 << endl;      // for reading a large file we will use loops
    readAndOut.close();      // once opened, the file should be closed.this cuts the link between this program and file

    // write a string to the file
    string str1 = ("Begining with the name of Allah, who is most mercyful. He who does good deeds will be rewarded jannah hereafter. Ameen"); // this writes multiple line at once
    ofstream write("write.txt");
    write << str1;
    write.close(); // this cuts the link between this program and file

    return 0;
}