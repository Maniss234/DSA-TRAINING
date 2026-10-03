#include <iostream>
using namespace std;
void reverseArray(int a[],int left,int right) {
    if(left>=right) return;
    int t=a[left];
    a[left]=a[right];
    a[right]=t;
    reverseArray(a,left+1,right-1);
}
int main() {
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    reverseArray(a,0,n-1);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
