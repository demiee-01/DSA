#include <iostream>
using namespace std;

class MyQueue {
private:
    int A[10];      // Array size = 10
    int Front;
    int Rear;
public:
    // Initialize queue
    void InitializeQueue() {
        Front = -1;
        Rear = -1;
    }

    // Check if queue is empty
    bool isEmpty() {
        return (Front == -1 && Rear == -1);
    }

    // Check if queue is full
    bool isFull() {
        return (Rear == 9);
    }

    // Insert element (enqueue)
    void Insert(int value) {
        if (isFull()) {
            cout << "Queue is full!\n";
            return;
        }
        if (isEmpty()) {
            Front = Rear = 0;
        } else {
            Rear++;
        }
        A[Rear] = value;
    }

    // Remove element (dequeue)
    void Remove() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return;
        }
        if (Front == Rear) { // Only one element
            Front = Rear = -1;
        } else {
            Front++; // Move front forward
        }
    }

    // Peek front element
    int PeekFront() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return -1;
        }
        return A[Front];
    }

    // Queue size
    int QueueSize() {
        if (isEmpty()) return 0;
        return Rear - Front + 1;
    }

    // Print all elements
    void PrintQ() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Queue: ";
        for (int i = Front; i <= Rear; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};

// Main function to test
int main() {
    MyQueue Q;
    Q.InitializeQueue();

    Q.Insert(10);
    Q.Insert(20);
    Q.Insert(30);
    Q.PrintQ();             // Queue: 10 20 30

    Q.Remove();
    Q.PrintQ();             // Queue: 20 30

    cout << "Peek front: " << Q.PeekFront() << endl; // 20
    cout << "Queue size: " << Q.QueueSize() << endl; // 2

    Q.Insert(40);
    Q.Insert(50);
    Q.PrintQ();             // Queue: 20 30 40 50

    return 0;
}