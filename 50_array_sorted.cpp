#include <iostream>
using namespace std;
bool sorted(int a[],int n) {
    if(n==1) return true;
    if(a[n-2]>a[n-1]) return false;
    return sorted(a,n-1);
}
int main() {
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<(sorted(a,n)?"Sorted":"Not Sorted");
}
