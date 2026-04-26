#include<iostream>
#include<stack>
#include<queue>
#include<list>
//#include <functional>
using namespace std;

// -------------------------------------
// do stack librarry
// push, pop, top, empty, size 

class Stack {
    stack<int> st ;
    public:
        void Run_stack(){
            if (st.empty()){
                   cout<<"Stack is empty"<< endl;
            }
            cout<<"Push : 10 20 30"<<endl;
            st.push(10);
            st.push(20);
            st.push(30);

            cout<<"Show to top element: "<< st.top()<<endl;
            st.pop();

            cout<<"Show to top element after pop: "<< st.top()<<endl;
            cout<<"Size of Stack: "<<st.size()<<endl;
        }

};


//---------------------------------------
// this is function do for Queue
//Queue, practice functions push, pop, empty, size, front, back 
class Queue {
    queue<int> Q;
    public:
        void Run_Queue(){
            if(Q.empty()){
                cout<<"Queue is empty "<<endl;
            }
            cout<<"Push : 10 20 40"<<endl;
            Q.push(10);
            Q.push(20);
            Q.push(30);
            cout<<"Show to Front: "<<Q.front()<<endl;
            cout<<"Show to Back: "<<Q.back()<<endl;
            Q.pop();
            cout<<"Show front after pop: "<<Q.front()<<endl;
            cout<<"Show back after pop: "<<Q.back()<<endl;
            
            if(Q.empty()){
                cout<<"Queue is empty: Yes"<<endl;
            }else{
                cout<<"Queue is empty: No"<<endl;
            }

            cout<<"Queue size :"<<Q.size()<<endl;
             


        }
};
// this function make for Queue priority
// Priority Queue (smallest first and biggest frist), practice
 
class Priority_Queue{
    priority_queue<int> pq;
    public:
        void Run_proority(){
            //Create a max-heap priority queue
            if(pq.empty()){
                cout<<"Priority_queue is empty"<<endl;
            }else{
                cout<<"Prority_queue is Not empty"<<endl;
            }
            cout<<"Push : 10 20 30"<<endl;
            pq.push(10);
            pq.push(20);
            pq.push(30);

            cout<<"Elements removed from priority queue in order big -> small: ";
            while(!pq.empty()){
                cout<< pq.top()<<" ";
                pq.pop(); // if not pop it still loop becuase not remove element

            }
            cout<<endl;
            




        }
};
class Priority_queue{
    priority_queue<int,vector<int>,greater<int>>p_q;
    public:
        void Run_proority(){
            //Create a min-heap priority queue
            cout<<"Push : 4 20 10"<<endl;
            p_q.push(4);
            p_q.push(20);
            p_q.push(10);
            p_q.push(90);

            cout<<"Elements removed from priority queue in order small -> big: ";
            while(!p_q.empty()){
                cout<< p_q.top()<<" ";
                p_q.pop(); // if not pop it still loop becuase not remove element
            }
            cout<<endl;
            p_q.pop(); 

            cout<<"Push : 1"<<endl;
            p_q.push(30);

            cout<<"Elements removed from priority queue in order small -> big: ";
            while(!p_q.empty()){
                cout<< p_q.top()<<" ";
                p_q.pop(); 
            }
            cout<<endl;
            
            cout<<"After pop  Priority queue Top is : "<<p_q.top()<<endl;
            p_q.pop();
            p_q.push(1);
            cout<<"After pop  Priority queue Top is : "<<p_q.top()<<endl;
            


           

            if(p_q.empty()){
                cout<<"Priority_queue is empty"<<endl;
            }else{
                cout<<"Prority_queue is Not empty"<<endl;
            }




        }
};



// this function show the result 

int main (){
    cout<<"============<> STACK <>=============="<<endl;
    Stack s;
    s.Run_stack();

    cout<<"============<> QUEUE <>=============="<<endl;
    Queue q;
    q.Run_Queue();

    cout<<"============<> PRIORITY QUEUE <>=============="<<endl;
    Priority_Queue p;
    p.Run_proority();

    cout<<"============<> PRIORITY QUEUE <>=============="<<endl;
    Priority_queue p_q;
    p_q.Run_proority();


};
