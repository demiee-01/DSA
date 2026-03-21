#include <iostream>
using namespace std;

#define SIZE 5
int A[SIZE];
int front = -1;
int rear = -1;

bool isempty()
{
    return (front == -1 && rear == -1);
}

bool isfull()
{
    return ((rear + 1) % SIZE == front);
}

void enqueue(int value)
{
    if (isfull())
    {
        cout << "Queue is full\n";
        return;
    }

    if (front == -1)
        front = 0;

    rear = (rear + 1) % SIZE;
    A[rear] = value;

    cout << "Enqueue: " << value << endl;
}

void dequeue()
{
    if (isempty())
    {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Dequeue: " << A[front] << endl;

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % SIZE;
    }
}

void display()
{
    if (isempty())
    {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Queue: ";
    int i = front;

    while (true)
    {
        cout << A[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }

    cout << endl;
}

void showFrontRear()
{
    if (isempty())
    {
        cout << "Queue is empty\n";
    }
    else
    {
        cout << "Front = " << A[front] << ", Rear = " << A[rear] << endl;
    }
}

int main()
{

    //  enqueue 5 elements
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();
    showFrontRear();

    //  dequeue 2 elements
    dequeue();
    dequeue();

    display();
    showFrontRear();

    // enqueue again (circular effect)
    enqueue(60);
    enqueue(70);

    display();
    showFrontRear();

    return 0;
}