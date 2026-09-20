#include<iostream>
#include<vector>
using namespace std;

vector<int> FindPos(vector<int>& arr,int key){

    sort(arr.begin(), arr.end());
    
    int n = arr.size();

    vector<int> occ;
    for(int i = 0; i < n; i++){
        if(arr[i] == key && occ.empty()){
            occ.push_back(i);
        }
        if(!occ.empty() && i < n && arr[i] == key){
            occ.push_back(i);

        }
    }
    return occ;
    
}

int main(){
    vector<int> nums;
    

    int n = nums.size();


    cout<<"Enter the elements of the array = ";
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }

    int key;
    cout<<"Enter key to search = \n";
    cin>>key;

    cout<<"The occurances are = ";
    vector<int> result = FindPos(nums,key);
    
    cout<< result.back();
    return 0;
}