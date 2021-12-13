#include<iostream>
#include<stdio.h>
#define size 5;
using namespace std;

class queue
{
private:
    int arr[size];
    int rear;
    int front;
public:

    bool IsFull();
    void enqueue(int x);
    bool IsEmpty();
    int dequeue();
    void display();
    queue()
    {
        rear=front=-1;
    };
    ~queue();
};

bool queue::IsFull()
{
    if ((front==-1 && rear= size-1)|| (front== rear+1))
    {
        return true;
    }
    else
    {
        return false;
    }
       
}

bool queue::IsEmpty()
{
    if (front==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
       
}

void queue::enqueue(int x)
{
    if (IsFull())
    {
        cout<<"overflow"<<endl;
    }
    else
    {
        if (front==-1)
        {
            front++;
            rear=(rear+1)%size;
            arr[rear]=x;
        }
        
    }    
}

int queue::dequeue()
{
    if (IsEmpty())
    {
        cout<<"empty queue"<<endl;
        return -1;
    }
    
    else
    {
        int item=arr[front];
        if (front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front=(front+1)%size;
        }
        return item;
    }
}

void queue::display()
{
    for (int i= front; i != rear; i = (i + 1) % size)
        cout << arr[i]<<endl;
    
}

int main()
{
    queue q1;
    q1.enqueue(6);
    q1.enqueue(3);
    q1.enqueue(8);
    q1.enqueue(2);
    q1.enqueue(9);

    q1.dequeue();
    q1.dequeue();
    q1.display();
}
