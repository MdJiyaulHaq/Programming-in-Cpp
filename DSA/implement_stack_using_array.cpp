// static memory allocation
#include<iostream>
using namespace std;

class Stack
{
    int size;
    int *arr;
public:
    Stack(int size)
    {
        arr[size];
    }
    int top=-1;
    int push(int);
    int pop();
};

int Stack::push(int x)
{
    if (top==size-1)
    {
        cout<<"stack overflow"<<endl;
    }
    else
    {
        top++;
        arr[top]=x;
    }
}
int Stack::pop()
{
    if (top==-1)
    {
        cout<<"stack underflow"<<endl;
    }
    else
    {
        cout<<arr[top]<<endl;
        top--;
    }
}

int main(int argc, char const *argv[])
{
    Stack s1(4);
    s1.push(5);
    s1.push(4);
    s1.push(8);
    s1.push(9);
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    return 0;
}

