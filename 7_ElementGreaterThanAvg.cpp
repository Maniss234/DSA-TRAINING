#include<iostream>
using namespace std;

int CalculateAverage(int arr[], int n){
int total_sum=0;
    for(int i =0; i<n; i++){
        total_sum += arr[i];
    }
    int Average = total_sum/n;
    return Average;
}

int ElementGreaterThanAvg(int arr[], int n){
    int sum =0;
    int num = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]>(sum/n)){
            num = arr[i];
        }
    }
    return num;
}



int main(){
   int n;
   cin>>n;

   int arr[n];
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }

   cout<<ElementGreaterThanAvg(arr,n);
   return 0;
}   