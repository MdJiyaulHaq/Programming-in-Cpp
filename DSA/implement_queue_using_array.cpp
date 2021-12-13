#include<iostream>
#include<stdio.h>

using namespace std;

class queue
{
private:
    int arr[5];
    int rear;
    int front;
public:

    void enqueue(int x);
    int dequeue();
    void display();
    queue()
    {
        rear=front=-1;
    };
    ~queue();
};

void queue::enqueue(int x)
{
    if (front=-1)
    {
        front++;
    }
    else if (rear== 5-1)
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        rear++;
        arr[rear]=x;
    }
    
}

int queue::dequeue()
{
    if (rear==-1)
    {
        cout<<"empty queue"<<endl;
        return 0;
    }


    // first approach

    // else
    // {
    //     int item=arr[front];
    //     for (int i = 0; i < rear; i++)
    //     {
    //         arr[i]=arr[i+1];
    //     }
    //     rear --;
    //     return item;
    // }

    // second approach

    else
    {
        int item=arr[front];
        front++;
        return item;
    }
}

void queue::display()
{
    if (front==-1 || rear ==-1 || rear<front)
    {
        cout<<"cannot display anything."<<endl;
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout<<arr[i]<<endl;
        }
        
    }
    
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
