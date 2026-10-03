#include <iostream>
#include <vector>
using namespace std;
void subsets(vector<int> a,vector<int> output,int index) {
    if(index==a.size()) {
        for(int x:output)cout<<x<<" ";
        cout<<"\n";
        return;
    }
    subsets(a,output,index+1);
    output.push_back(a[index]);
    subsets(a,output,index+1);
}
int main() {
    int n,x;
    vector<int>a;
    cin>>n;
    while(n--) {
        cin>>x;
        a.push_back(x);
    }
    vector<int>output;
    subsets(a,output,0);
}
