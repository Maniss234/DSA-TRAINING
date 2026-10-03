#include <iostream>
#include <vector>
using namespace std;
void find(vector<int> &a,vector<int> &output,int index,int sum,int k) {
    if(index==a.size()) {
        if(sum==k) {
            for(int x:output)cout<<x<<" ";
            cout<<"\n";
        }
        return;
    }
    output.push_back(a[index]);
    find(a,output,index+1,sum+a[index],k);
    output.pop_back();
    find(a,output,index+1,sum,k);
}
int main() {
    int n,x,k;
    vector<int>a,output;
    cin>>n;
    while(n--) {
        cin>>x;
        a.push_back(x);
    }
    cin>>k;
    find(a,output,0,0,k);
}
