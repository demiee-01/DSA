#include <iostream>
using namespace std;

// 1. Create Node
struct Node {
    int data;
    Node* link;
};

Node* head = NULL;

// 2. Insert at tail (make 10 links + use later)
void insertTail(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->link = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = newNode;
    }
}

// 3. Insert at any position
void insertAtPosition(int value, int pos) {
    Node* newNode = new Node();
    newNode->data = value;

    if (pos == 1) {
        newNode->link = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1; i++) {
        if (temp == NULL) {
            cout << "Position invalid!\n";
            return;
        }
        temp = temp->link;
    }

    newNode->link = temp->link;
    temp->link = newNode;
}

// 4. Delete at any position
void deleteAtPosition(int pos) {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }

    if (pos == 1) {
        Node* temp = head;
        head = head->link;
        delete temp;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1; i++) {
        if (temp->link == NULL) {
            cout << "Position invalid!\n";
            return;
        }
        temp = temp->link;
    }

    Node* del = temp->link;
    if (del == NULL) {
        cout << "Position invalid!\n";
        return;
    }

    temp->link = del->link;
    delete del;
}

// 5. Print value + address
void printList() {
    Node* temp = head;
    while (temp != NULL) {
        cout << "Value: " << temp->data;
        cout << " -> Address: " << temp << endl;
        temp = temp->link;
    }
    cout << "----------------------\n";
}

// Main Function
int main() {

    // 1. Make 10 links
    for (int i = 1; i <= 10; i++) {
        insertTail(i);
    }

    cout << "Initial List (10 Nodes):\n";
    printList();

    // 2. Insert at position
    cout << "\nInsert 99 at position 3:\n";
    insertAtPosition(99, 3);
    printList();

    // 3. Delete at position
    cout << "\nDelete node at position 5:\n";
    deleteAtPosition(5);
    printList();

    // 5. Insert at tail
    cout << "\nInsert 100 at tail:\n";
    insertTail(100);
    printList();

    return 0;
}