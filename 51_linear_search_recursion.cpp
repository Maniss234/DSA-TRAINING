#include <iostream>
using namespace std;
int search(int a[],int n,int key,int index) {
    if(index==n) return -1;
    if(a[index]==key) return index;
    return search(a,n,key,index+1);
}
int main() {
    int n,a[100],key;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>key;
    cout<<search(a,n,key,0);
}
