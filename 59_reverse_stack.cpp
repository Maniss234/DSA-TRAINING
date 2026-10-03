#include <iostream>
#include <stack>
using namespace std;
void insertBottom(stack<int> &s,int x) {
    if(s.empty()) {
        s.push(x);
        return;
    }
    int t=s.top();
    s.pop();
    insertBottom(s,x);
    s.push(t);
}
void reverseStack(stack<int> &s) {
    if(s.empty())return;
    int x=s.top();
    s.pop();
    reverseStack(s);
    insertBottom(s,x);
}
int main() {
    int n,x;
    stack<int>s;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>x;
        s.push(x);
    }
    reverseStack(s);
    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
}
