#include <iostream>
#define Size 200
using namespace std;

string Hash_Table[Size];

const string Empty = "";
const string Delete = "#DELETE#";

// make it for convert charater to number
int char_to_num( char c){
    return c - 'a' + 1;
}

// make for function hash_table
int Hash_Function(string key){
    int value = 0;

    value = char_to_num(key[0]) * 27 + char_to_num(key[1]);

    return value % Size;
    
}

// make it for function insert
void insert(string key){
    int index = Hash_Function(key);
    int start = index;

    while(Hash_Table[index ] != Empty && Hash_Table[index]  != Delete){
        index = (index + 1 ) % Size;

        if(index == start){
            cout<<"Hash Table is full!"<< endl;
        }    
    }
    
    Hash_Table[index] = key;

}

// make function for search
void search(string key){
    int index = Hash_Function(key);
    int start = index;

    cout<<"\nSearching: "<< key <<endl;

    while(Hash_Table[index] != Empty ){
        if(Hash_Table[index] == key){
            cout<<"Found at index: "<< index <<endl;
            return;
        }

        index = ( index + 1) % Size;

        if(index == start){
            break;
        }
    }
}

// make function for delete
void Delete_key(string key){
    int index = Hash_Function(key);
    int start = index;


    cout <<"\nDeleting: "<< key <<endl;

    while(Hash_Table[index ] != Empty ){
        if(Hash_Table[index] == key){
            Hash_Table[index] = Delete;
            cout<<"Delete Already"<< endl;
            return;
        }

        index = ( index + 1 ) % Size;

        if(index == start){
            break;
        }
    } 
    cout<<"Key not fount, "<<endl;
}


// make function for display
void display(){

    for (int i = 0; i < Size;  i++){
        if(Hash_Table[i] !=Empty && Hash_Table[i] != Delete){
            cout<< i << " : "<< Hash_Table[i]<< endl;
        }
    }
}

int main() {
    insert("aa");
    insert("ak");
    insert("au");
    insert("ck");
    insert("gg");
    insert("ad");
    insert("hi");

    display();
    search("ak");
    Delete_key("ak");
    display();
    search("ak");
    insert("gp");
    display();
    Delete_key("ad");

    return 0;
}