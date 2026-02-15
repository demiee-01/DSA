#include <iostream>
using namespace std;

class My_Stack{

    private:
    int Arr[10];
    int top = -1;
     
    public:
    void Push( int value ); // Push element to the top
    void Pop();
    void PrintStack(); // Print for all element
    int Peek(); // show value on top
    int Size();
    bool isEmpty();
    bool isFull();


     
};


void My_Stack::Push(int value){
    top++;
    Arr[top] = value;
};

void My_Stack::PrintStack() {
    for ( int i = 0; i <= top ; i++)
    cout<< Arr[i] <<" ";
    cout<<endl;
};

void My_Stack::Pop(){
top--;
};

int My_Stack::Peek() {
    return Arr[top];

};

int My_Stack::Size(){
    return top + 1;

};

bool My_Stack::isEmpty() {
    return top == -1;

};
bool My_Stack::isFull() {
    return top == 9;

};






int main() {
    My_Stack My_Variable;
    My_Variable.Push(7);
    My_Variable.Push(11);
    My_Variable.Push(5);
    My_Variable.PrintStack();
    My_Variable.Pop();
    My_Variable.PrintStack();
    My_Variable.Push(744);
    My_Variable.Push(330);
    My_Variable.Pop();
    My_Variable.PrintStack();

    cout << "Top element: " << My_Variable.Peek() << endl;    // Output: 744
    cout << "Stack size: " << My_Variable.Size() << endl;     // Output: 3
    cout << "Is empty? " << My_Variable.isEmpty() << endl;   // Output: 0 (false)
    cout << "Is full? " << My_Variable.isFull() << endl;     // Output: 0 (false)

    
    return 0;

};

