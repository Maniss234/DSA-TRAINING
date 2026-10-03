#include <iostream>
#include <string>
using namespace std;
void powerSet(string s,string output,int index) {
    if(index==s.length()) {
        cout<<"{"<<output<<"}\n";
        return;
    }
    powerSet(s,output,index+1);
    powerSet(s,output+s[index],index+1);
}
int main() {
    string s;
    cin>>s;
    powerSet(s,"",0);
}
