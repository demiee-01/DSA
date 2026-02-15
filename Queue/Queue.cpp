#include <iostream>
using namespace std;

class My_Queue{
    private:
        int  A[ 10 ];
        int Rear;
        int Front;
    
    public:
        void IniliatizeQueue();
        
        void Insert ( int Value);

        void Remove();

        int PeekFront();

        int QueueSize();

        bool isEmpty();

        bool isFull();

        void PrintQ();

};

 void My_Queue::IniliatizeQueue(){
    Rear = -1;
    Front = -1;
}

 void My_Queue::Insert(int Value){
    if(Rear == -1 && Front == -1){
        Rear = 0;
        Front = 0;
        A[ Rear ] = Value;

    }else{
        Rear++;
        A[ Rear] = Value;
    }
};
 void My_Queue::Remove(){
    Rear--;
 }
 void My_Queue::PrintQ(){
    for ( int i = 0; i<= Rear; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
 }

 int My_Queue::QueueSize(){
    
    return Rear - Front + 1;
}

// Check if queue is empty
bool My_Queue::isEmpty(){
    return (Front == -1 && Rear == -1);
}

// Check if queue is full
bool My_Queue::isFull(){
    return (Rear == 9); // array size = 10
}
int My_Queue::PeekFront(){
    //if(isEmpty())
      //  cout << "Queue is empty\n";
      //  return -1;
    
    return A[Front];
}

int main(){

    My_Queue MyQ_1;
    MyQ_1.IniliatizeQueue();
    MyQ_1.Insert(10);
    MyQ_1.Insert(14);
    MyQ_1.PrintQ();
    MyQ_1.Remove();
    MyQ_1.PrintQ();

    cout << "Peek front: " << MyQ_1.PeekFront() << endl;
    cout << "Queue size: " << MyQ_1.QueueSize() << endl;
    return 0;
}