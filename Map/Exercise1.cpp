// use basic map oparaction 
#include <iostream>
#include <map>

using namespace std;

    int main() {
        map<string , double > Student;

        //task 1
        Student["Dara"] = 85.5;
        Student["Sokie"] = 70.9;
        Student["Thida"] = 100.0;
        Student["Vannxie"] = 90.7;
        // when it fine alredy if found ponter elemebt is not found return -> student.end() in background
        //task2 use for update
        Student["Dara"] = 88.5;

        // task 3 use for print-All

        cout<<"Student: "<<endl;
        for (auto x: Student){
            cout<< x.first <<":"<< x.second<< endl;
        }
        // task 4 use for find student 
        if(Student.find("Thida") != Student.end()){ // student end is formul STl
            cout<<"->Thida have exists"<<endl;
        }else{
            cout<<"->Thida not have exists"<<endl;
        }



    }