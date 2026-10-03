#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

Node* insertAtHead(Node* head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    return newNode;
}

Node* insertAtTail(Node* head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) return newNode;
    
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

Node* insertAtPosition(Node* head, int val, int pos) {
    if (pos == 1) return insertAtHead(head, val);
    
    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }
    
    if (temp == nullptr) return head;
    
    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

Node* deleteAtHead(Node* head) {
    if (head == nullptr) return nullptr;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* deleteAtTail(Node* head) {
    if (head == nullptr) return nullptr;
    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }
    
    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* deleteAtPosition(Node* head, int pos) {
    if (head == nullptr) return nullptr;
    if (pos == 1) return deleteAtHead(head);
    
    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp->next != nullptr; i++) {
        temp = temp->next;
    }
    
    if (temp->next == nullptr) return head;
    
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
    return head;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;
    
    head = insertAtHead(head, 20);
    head = insertAtHead(head, 10);
    head = insertAtTail(head, 40);
    head = insertAtPosition(head, 30, 3);
    display(head);
    
    head = deleteAtHead(head);
    head = deleteAtTail(head);
    head = deleteAtPosition(head, 2);
    display(head);
    
    return 0;
}
