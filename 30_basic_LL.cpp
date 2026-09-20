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

void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int getLength(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

bool linearSearch(Node* head, int target) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == target) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    
    cout << "Hardcoded List: ";
    display(head);
    
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    
    for (int i = 0; i < 3; i++) {
        int val;
        cin >> val;
        temp->next = new Node(val);
        temp = temp->next;
    }
    
    cout << "Final List: ";
    display(head);
    
    cout << "Total Length: " << getLength(head) << endl;
    
    int target = 20;
    cout << "Searching for " << target << ": " << (linearSearch(head, target) ? "Found" : "Not Found") << endl;
    
    return 0;
}
