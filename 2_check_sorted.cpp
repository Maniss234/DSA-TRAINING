#include<iostream>
using namespace std;

bool checkSorting(int arr[],int n){ // consider ascending order
    int found = 1;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]>arr[j]){
            found = -1;
            }
        }
    }
    if(found == 1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter the size of array :\n";
    cin>>n;

    int arr[n];
    cout<<"Enter the elenments:"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<checkSorting(arr,n);
    return 0;
}