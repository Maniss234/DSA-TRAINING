#include <iostream>
#include <stack>
using namespace std;
void sortedInsert(stack<int> &s,int x) {
    if(s.empty()||s.top()<=x) {
        s.push(x);
        return;
    }
    int t=s.top();
    s.pop();
    sortedInsert(s,x);
    s.push(t);
}
void sortStack(stack<int> &s) {
    if(s.empty())return;
    int x=s.top();
    s.pop();
    sortStack(s);
    sortedInsert(s,x);
}
int main() {
    int n,x;
    stack<int>s;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>x;
        s.push(x);
    }
    sortStack(s);
    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
}
