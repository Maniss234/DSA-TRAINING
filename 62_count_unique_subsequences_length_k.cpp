#include <iostream>
#include <string>
#include <set>
using namespace std;
void find(string s,string output,int index,int k,set<string> &answer) {
    if(output.length()==k) {
        answer.insert(output);
        return;
    }
    if(index==s.length())return;
    find(s,output+s[index],index+1,k,answer);
    find(s,output,index+1,k,answer);
}
int main() {
    string s;
    int k;
    set<string> answer;
    cin>>s>>k;
    find(s,"",0,k,answer);
    cout<<answer.size();
}
