#include<iostream>
using namespace std;

void IncrementByTwo(int arr[],int n){
    for(int i =0; i<n; i++){
        arr[i] += 2;
    }
}

int main(){
    int n; 
    cin>>n;

    int arr[n];
    cout<<"Enter elments\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    IncrementByTwo(arr,n);
    cout<<"The required array is \n";
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}