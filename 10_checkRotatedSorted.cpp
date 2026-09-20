//WAP to check if given array is rotated sorted or not 

#include<iostream>
using namespace std;

bool CheckRotatedSorted(int arr[],int n){
    int dip = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i-1]){
            dip++;

        }
    }
    if(dip == 1){
        return true;
    }        
    return false;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    if(CheckRotatedSorted(arr, n)){
        cout<<"Yes, the array is rotated sorted";
    }
    if(!CheckRotatedSorted(arr,n)){
        cout<<"No, the array is not rotated sorted";
    }

    return 0;
}