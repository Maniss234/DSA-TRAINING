#include <iostream>
#include <string>
using namespace std;
void reverseString(string &s,int left,int right) {
    if(left>=right) return;
    char t=s[left];
    s[left]=s[right];
    s[right]=t;
    reverseString(s,left+1,right-1);
}
int main() {
    string s;
    cin>>s;
    reverseString(s,0,s.length()-1);
    cout<<s;
}
