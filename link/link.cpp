#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Linked List class
class MyLinkedList {
private:
    Node* head; // first node
public:
    MyLinkedList() { head = nullptr; }

    // Check if list is empty
    bool isEmpty() { return head == nullptr; }

    // Insert at tail
    void insertTail(int value) {
        Node* newNode = new Node{value, nullptr};
        if (isEmpty()) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    // Insert at any position (1-based index)
    void insertAtPosition(int value, int pos) {
        Node* newNode = new Node{value, nullptr};
        if (pos == 1) { // insert at front
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp != nullptr; i++)
            temp = temp->next;
        if (temp == nullptr) {
            cout << "Position out of bounds\n";
            delete newNode;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Delete at any position (1-based index)
    void deleteAtPosition(int pos) {
        if (isEmpty()) {
            cout << "List is empty\n";
            return;
        }
        Node* temp = head;
        if (pos == 1) { // delete front
            head = head->next;
            delete temp;
            return;
        }
        Node* prev = nullptr;
        for (int i = 1; i < pos && temp != nullptr; i++) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Position out of bounds\n";
            return;
        }
        prev->next = temp->next;
        delete temp;
    }

    // Print all values and addresses
    void printList() {
        if (isEmpty()) {
            cout << "List is empty\n";
            return;
        }
        Node* temp = head;
        int pos = 1;
        while (temp != nullptr) {
            cout << "Pos " << pos
                 << " | Value: " << temp->data
                 << " | Address: " << temp
                 << " | Next: " << temp->next << endl;
            temp = temp->next;
            pos++;
        }
    }
};

// Main to test
int main() {
    MyLinkedList list;

    // Make 10 links
    for (int i = 1; i <= 10; i++)
        list.insertTail(i);

    cout << "Initial 10 links:\n";
    list.printList();

    //  Insert at position 5
    cout << "\nInsert 99 at position 5:\n";
    list.insertAtPosition(99, 5);
    list.printList();

    //  Delete at position 3
    cout << "\nDelete node at position 3:\n";
    list.deleteAtPosition(3);
    list.printList();

    //  Insert at tail
    cout << "\nInsert 100 at tail:\n";
    list.insertTail(100);
    list.printList();

    return 0;
}