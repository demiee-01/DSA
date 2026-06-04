#include<iostream>
#define Size 200

using namespace std;
string Hash_Table[Size];


// convert charater to number
int char_to_num(char c){
    return c - 'a' + 1;
}


// hash function
int Hash_Function(string key) {
    int value = 0;
    
    // multiply power method
    value = char_to_num(key[0]) * 27 + char_to_num (key[1]);
        return value % Size ;
    
}

// insert function using linear probing
void insert(string key) {
    int index = Hash_Function(key);

    while(Hash_Table[ index ] != ""){
        index = (index +1) % Size ; 
    }

    Hash_Table[index] = key;
}

// search function using linear probing
void search(string key) {
    int index = Hash_Function(key);
    int start = index;

    cout<<"\nSearching: "<< key << endl;

    while (Hash_Table[index] != ""){
        if (Hash_Table[index] == key ) {
            cout<< "Found at index: " << index << endl;
            return;
        }

        index = (index + 1) %  Size;

        if ( index == start){
            break;
        }
        
    }
    cout<< "Not Found!" << endl;
}

// display hash table
void display() {
    
    for(int i = 0 ; i < Size; i++) {
        if( Hash_Table[i] != "") {
            cout<< i <<" : "<< Hash_Table[i] <<endl;

        }
    }
}



int main() {


    insert("ck");
    insert("ak");
    insert("zk");
    insert("aa");
    insert("au");
    insert("gg");
    insert("hi");
    insert("kc");

    display();

    search("ak");
    search("ck");
    search("zz");
    search("zy");


    return 0;
}