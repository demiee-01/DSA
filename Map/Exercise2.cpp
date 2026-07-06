#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    unordered_map< string , vector<int>> studentScore;

    // task1 : add these test scores for each the student
    // student name Dara
    studentScore["Dara"].push_back(85);
    studentScore["Dara"].push_back(90);
    studentScore["Dara"].push_back(88);

    // student name sokha
    studentScore["Sokha"].push_back(92);
    studentScore["Sokha"].push_back(95);
    studentScore["Sokha"].push_back(89);


    // task2 : calulate and print average scores for each student
    cout<<"Average Score\n";

    for(auto student: studentScore){
        int sum = 0;
        for(int score : student.second){
            sum += score;
        }

        double average = (double)sum / student.second.size();
        cout<< student.first<<" : "<<average<<endl;
    }


    // task3: add a new score for dara
    studentScore["Dara"].push_back(93);

    // task4: print number of score for each student 
    cout<<"\nNumber of Score\n";

    for(auto student: studentScore){
        cout<< student.first<<" : " <<student.second.size()<<" scores "<<endl;

    }

    return 0;
}