#include <iostream>
#include <string>
using namespace std;
void subsequence(string input,string output,int index) {
    if(index==input.length()) {
        cout<<"{"<<output<<"}\n";
        return;
    }
    subsequence(input,output,index+1);
    subsequence(input,output+input[index],index+1);
}
int main() {
    string s;
    cin>>s;
    subsequence(s,"",0);
}
