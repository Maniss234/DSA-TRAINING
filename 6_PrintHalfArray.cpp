#include<iostream>
using namespace std;

void HalfArray(int arr[], int n){
    for(int i=0; i<n/2; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
   int n;
   cin>>n;

   int arr[n];
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }

   HalfArray(arr,n);

   return 0;
}  