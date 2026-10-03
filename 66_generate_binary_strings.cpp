#include <iostream>
#include <string>
using namespace std;
void generate(int n,string output) {
    if(output.length()==n) {
        cout<<output<<"\n";
        return;
    }
    generate(n,output+'0');
    generate(n,output+'1');
}
int main() {
    int n;
    cin>>n;
    generate(n,"");
}
