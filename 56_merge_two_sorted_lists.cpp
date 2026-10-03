#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
}
;
Node* insertEnd(Node* head,int value) {
    Node* node=new Node {
        value,NULL
    }
    ;
    if(head==NULL) return node;
    Node* p=head;
    while(p->next!=NULL) p=p->next;
    p->next=node;
    return head;
}
Node* merge(Node* first,Node* second) {
    if(first==NULL) return second;
    if(second==NULL) return first;
    if(first->data<second->data) {
        first->next=merge(first->next,second);
        return first;
    }
    second->next=merge(first,second->next);
    return second;
}
int main() {
    int n,m,x;
    Node *first=NULL,*second=NULL;
    cin>>n;
    while(n--) {
        cin>>x;
        first=insertEnd(first,x);
    }
    cin>>m;
    while(m--) {
        cin>>x;
        second=insertEnd(second,x);
    }
    Node* answer=merge(first,second);
    while(answer) {
        cout<<answer->data<<" ";
        answer=answer->next;
    }
}
