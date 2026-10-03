#include <iostream>
using namespace std;
int reverseNumber(int n,int answer) {
    if(n==0) return answer;
    return reverseNumber(n/10,answer*10+n%10);
}
int main() {
    int n;
    cin>>n;
    cout<<reverseNumber(n,0);
}
