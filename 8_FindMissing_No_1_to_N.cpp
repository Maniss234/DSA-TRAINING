#include<iostream>
#include<algorithm>
using namespace std;

void SortArray(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
}

int MissingNumber(int arr[], int n){
    SortArray(arr,n);
    int total_sum = arr[n-1]*(arr[n-1]+1)/2;
    int sum_array = 0;
    for(int i = 0; i < n; i++){
        sum_array += arr[i];
    }
    return total_sum-sum_array;
}

int main(){
    int n; 
    cout<<"Enter size : \n";
    cin>>n;

    int arr[n];
    cout<<"Enter elments\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"the missing no. is = "<<MissingNumber(arr,n)<<"\n";
    
    return 0;
}

