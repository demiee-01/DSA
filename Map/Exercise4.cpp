#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {

    string text = "the quick brown fox jumps over the lazy dog the fox";
    unordered_map<string , int> wordFreq;

    // task1 : count frequency of each word
    string word = "";

    for (char c : text){
        if( c !=' ' ){
            word += c; // bulid the current word
        }else{
            wordFreq[word] ++ ; // save word into map
            word = ""; //rest for next word
        }
    }
    // save the last word
    if(!word.empty()){
        wordFreq[word] ++;
    }

    // task2 : print words that appear more than once

    cout<<"Word appearing more than once: \n";
    for(auto x : wordFreq){
        if(x.second > 1){
            cout<< x.first<<" : " << x.second << endl;
        }
    }

    // task3: Find the word with hightest frequency

    string mostWord = "";
    int maxFreq = 0;

    for (auto x: wordFreq) {
        if(x.second > maxFreq) {
            maxFreq = x.second;
            mostWord = x.first;
        }
    }

    cout<< "\nMost Frequent Word\n";
    cout<< mostWord<< " : " << maxFreq<<endl;


    return 0;
}