#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node{data, nullptr};  
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}


void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    
    insertAtEnd(head, 40);

    
    cout << "Updated Linked List: ";
    printLinkedList(head);  // Output: 10 20 30 4

    
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
