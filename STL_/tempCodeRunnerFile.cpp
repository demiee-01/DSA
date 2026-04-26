#include <iostream>
#include <stack>
#include <queue>
#include<list>
#include<vector>
using namespace std;

class Stack {
    stack<int> st;
    public:
        void run_stack(){

        cout<<"========< STACK >========"<<endl;
        cout<<"Push : 10 20 30\n"<<endl;
         // push
        st.push(10);
        st.push(20);
        st.push(30);

        // top
        cout << "Top element: " << st.top() << endl;

        // size
        cout << "Size: " << st.size() << endl;

        // pop
        st.pop();

        cout << "After pop top: " << st.top() << endl;

        // empty
        if(st.empty()) {
            cout << "Stack is empty" << endl;
        }else {
            cout << "Stack is NOT empty" << endl;
        }

           
    }
        
    
};

class Queue {
    queue<int> q;
    public: 
      void  run_queue(){
        cout<<"\n========< QUEUE >========"<<endl;
        cout<<"Push: 1 2 3"<<endl;
        // push
        q.push(1);
        q.push(2);
        q.push(3);

        // front & back
        cout << "Front: " << q.front() << endl;
        cout << "Back: " << q.back() << endl;

        // size
        cout << "Size: " << q.size() << endl;

        // pop
        q.pop();

        cout << "After pop, Front: " << q.front() << endl;

        cout << "Size: " << q.size() << endl;
        // empty
         if(q.empty()) {
            cout << "Queue is empty" << endl;
         }else {
            cout << "Queue is NOT empty" << endl;
            }

    }
};

class Priority_q{
    priority_queue<int> pq; // prioriry q ( biggest first)
    priority_queue<int, vector<int>, greater<int>> p_q; // ( smallest first)
    public:
        void run_priority_q(){
            
            cout<<"\n========< QUEUE PRIORITY >========"<<endl;

            cout<<"------ Max Heap (Biggest First) ------\n"<<endl;
            cout<<"Push: 50 60 70"<<endl;
            pq.push(50);
            pq.push(60);
            pq.push(70);

            cout << "Top (max): " << pq.top()<<endl; 
            cout<<"Priority_queue size"<<pq.size()<<endl;
            cout<<"Priority_queue Biggest firts : ";
            while(!pq.empty()) {
                cout << pq.top() << " ";
                pq.pop();
            }
            cout<<endl;

            pq.push(50);
            pq.push(60);
            pq.push(70);
            pq.pop();           
            cout << "Top (max) after pop: " << pq.top()<<endl; 
            cout<<"Priority_queue size : ";
            while(!pq.empty()) {
                cout << pq.top() << " ";
                pq.pop();
            }
            cout<<endl;
            

    //===============================================================

            cout<<"\n------Min Heap (Smallest First)------\n"<<endl;
            cout<<"Push: 40  30 20"<<endl;
            p_q.push(40);
            p_q.push(30);
            p_q.push(20);

            cout << "Top (min): " << p_q.top() << endl;
            cout<<"Priority_queue size : "<<p_q.size()<<endl;
            cout<<"Priority_queue Smallest firts : ";
            while(!p_q.empty()) {
                cout << p_q.top() << " ";
                p_q.pop();
            }
            cout<<endl;

            p_q.push(40);
            p_q.push(30);
            p_q.push(20);
            p_q.pop();

            cout << "Top (min): " << p_q.top() << endl;
            cout<<"Priority_queue size : "<<p_q.size()<<endl;
            cout<<"Priority_queue Smallest firts : ";
            while(!p_q.empty()) {
                cout << p_q.top() << " ";
                p_q.pop();
            }
        

    
    }
};

class List{
    list<int> myList;
    public:
       void lis(){
        cout<<"\n\n========< LIST >========\n"<<endl;
        // push_back & push_front
    myList.push_back(20);
    myList.push_back(30);
    myList.push_front(10); // List: 10 20 30

    cout << "Front: " << myList.front() << endl; // 10
    cout << "Back: " << myList.back() << endl;   // 30
    cout << "Size: " << myList.size() << endl;

    // Iterating forward
    cout << "List forward: ";
    for(auto it = myList.begin(); it != myList.end(); ++it){
        cout << *it << " ";
    }
        
    cout << endl;

    // Iterating backward
    cout << "List backward: ";
    for(auto rit = myList.rbegin(); rit != myList.rend(); ++rit){
        cout << *rit << " ";
    }
        
    cout << endl;

    // pop_front & pop_back
    myList.pop_front(); // remove 10
    myList.pop_back();  // remove 30

    cout << "After pop front & back list: ";
    for(auto it = myList.cbegin(); it != myList.cend(); ++it){
        cout << *it << " ";
    }
        
    cout << endl;

    cout << "Empty? " << (myList.empty() ? "Yes" : "No") << endl;
    cout << "Max size: " << myList.max_size() << endl;

       } 
};

int main(){
    Stack s;
    s.run_stack();

    Queue q;
    q.run_queue();

    Priority_q p;
    p.run_priority_q();

    List l;
    l.lis();
}

