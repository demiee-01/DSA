#include <iostream>
using namespace std;

// Global variables
int A[10];
int top = -1;

// Push
void Push(int value) {
    if (top == 9) {
        cout << "Stack Overflow" << endl;
        return;
    }
    top++;
    A[top] = value;
}

// Pop
void Pop() {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
        return;
    }
    top--;
}

// Peek (Top)
int Peek() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return A[top];
}

// Size
int Size() {
    return top + 1;
}

// Empty
bool isEmpty() {
    return top == -1;
}

// Full
bool isFull() {
    return top == 9;
}

// Print
void PrintStack() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    for (int i = 0; i <= top; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {

    Push(7);
    Push(11);
    Push(5);
    PrintStack();

    Pop();
    PrintStack();

    Push(744);
    Push(330);
    Pop();
    PrintStack();

    cout << "Top element: " << Peek() << endl;
    cout << "Stack size: " << Size() << endl;
    cout << "Is empty? " << isEmpty() << endl;
    cout << "Is full? " << isFull() << endl;

    return 0;
}