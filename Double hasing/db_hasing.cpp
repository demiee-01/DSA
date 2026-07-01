#include <iostream>
using namespace std;

const int SIZE = 100;
const int PRIME = 97;

const int EMPTY = -1;
const int DELETED = -2;

int table[SIZE];

// Initialize Hash Table
void init()
{
    for(int i = 0; i < SIZE; i++)
    {
        table[i] = EMPTY;
    }
}

// First Hash Function
int hash1(int key)
{
    return key % SIZE;
}

// Second Hash Function
int hash2(int key)
{
    return PRIME - (key % PRIME);
}

// Insert
void insert(int key)
{
    int index = hash1(key);
    int step = hash2(key);

    int i = 0;
    int pos;

    while(true) {
        pos = (index + i * step) % SIZE;

        if(table[pos] == EMPTY || table[pos] == DELETED) {
            table[pos] = key;

            cout << key << " inserted at index " << pos << endl;
            return;
        }

        i++;
    }
}

// Search
void search(int key)
{
    int index = hash1(key);
    int step = hash2(key);

    int i = 0;
    int pos;

    while(true) {
        pos = (index + i * step) % SIZE;

        if(table[pos] == EMPTY){
            cout << key << " not found\n";
            return;
        }

        if(table[pos] == key){
            cout << key << " found at index " << pos << endl;
            return;
        }

        i++;
    }
}

// Delete
void remove(int key)
{
    int index = hash1(key);
    int step = hash2(key);

    int i = 0;
    int pos;

    while(true) {
        pos = (index + i * step) % SIZE;
        if(table[pos] == EMPTY)
        {
            cout << key << " not found\n";
            return;
        }

        if(table[pos] == key){
            table[pos] = DELETED;
            cout << key << " deleted\n";
            return;
        }

        i++;
    }
}

// Display
void display()
{
    cout << "\nIndex\tValue\n";
    for(int i = 0; i < SIZE; i++) {
        cout << i << "\t";
        if(table[i] == EMPTY){
            cout << "EMPTY";
        }

        else if(table[i] == DELETED){
             cout << "DELETED";
        } 
        else{
            cout << table[i];
        }

        cout << endl;
    }
}

int main()
{
    init();

    // Same hash1 = 25 → collision occurs
    insert(25);
    insert(125);
    insert(225);
    insert(325);

    display();

    cout << endl;

    search(225);

    remove(125);

    cout << "\nAfter delete:\n";

    display();

    return 0;
}