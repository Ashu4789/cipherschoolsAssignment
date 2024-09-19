#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void insertSorted(int val) {
        Node* newNode = new Node(val);
        
        if (!head || head->data >= val) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next && temp->next->data < val) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data;
            if (temp->next) cout << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    int n, value, insertValue;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> value;
        list.insertSorted(value);
    }

    cin >> insertValue;

    list.insertSorted(insertValue);

    list.display();

    return 0;
}