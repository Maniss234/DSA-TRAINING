#include <iostream>
using namespace std;
void sortArray(int a[],int n) {
    if(n==1) return;
    sortArray(a,n-1);
    int key=a[n-1],j=n-2;
    while(j>=0 && a[j]>key) {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=key;
}
int main() {
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sortArray(a,n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
