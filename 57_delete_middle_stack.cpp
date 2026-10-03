#include <iostream>
#include <stack>
using namespace std;
void deleteMiddle(stack<int> &s,int k) {
    if(k==1) {
        s.pop();
        return;
    }
    int x=s.top();
    s.pop();
    deleteMiddle(s,k-1);
    s.push(x);
}
int main() {
    int n,x;
    stack<int>s;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>x;
        s.push(x);
    }
    deleteMiddle(s,n/2+1);
    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
}
