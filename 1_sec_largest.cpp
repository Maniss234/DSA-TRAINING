#include<iostream>
using namespace std;

int secondLargest(int arr[],int n){
     int first_largest = INT_MIN;
    int second_largest = INT_MIN;
    
    for(int i =0; i < n; i++){
        if(arr[i]>first_largest){
            second_largest=first_largest;
            first_largest=arr[i];
        }
        else if(arr[i]<first_largest && arr[i]>second_largest){
            second_largest = arr[i];
        }
    }
    return second_largest;
}

int main(){
    int arr[] = {2,5,4,3,10,4,5,8,90,87};
    int n = 10;


   cout<<"The required no. is = "<<secondLargest(arr,n)<<endl;

   return 0;
}