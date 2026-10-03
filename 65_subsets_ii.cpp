#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void subsets(vector<int> &a,vector<int> &output,int start) {
    for(int x:output)cout<<x<<" ";
    cout<<"\n";
    for(int i=start;i<a.size();i++) {
        if(i>start&&a[i]==a[i-1])continue;
        output.push_back(a[i]);
        subsets(a,output,i+1);
        output.pop_back();
    }
}
int main() {
    int n,x;
    vector<int>a,output;
    cin>>n;
    while(n--) {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    subsets(a,output,0);
}
