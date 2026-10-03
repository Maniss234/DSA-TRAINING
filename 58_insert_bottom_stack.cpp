#include <iostream>
#include <stack>
using namespace std;
void insertBottom(stack<int> &s,int x) {
    if(s.empty()) {
        s.push(x);
        return;
    }
    int top=s.top();
    s.pop();
    insertBottom(s,x);
    s.push(top);
}
int main() {
    int n,x,value;
    stack<int>s;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>x;
        s.push(x);
    }
    cin>>value;
    insertBottom(s,value);
    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
}
