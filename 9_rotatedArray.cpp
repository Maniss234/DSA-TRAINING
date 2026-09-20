//WAP to ratate an Array by k times

#include<iostream>
using namespace std;



void reverseArray(int arr[],int i, int j){
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
        }
    }

void rotateArray(int arr[],int n, int k){
    k = k%n;
    
    reverseArray(arr,n-k,n-1);
    reverseArray(arr,0,n-k-1);
    reverseArray(arr, 0, n-1);
     
}


int main() {
    int n;

    cout<<"Enter size of the array = ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array :\n";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter k(No. of times you want to rotate array) = ";
    cin>>k;


    rotateArray(arr,n,k);
    
    cout << "The rotated array is : "<<endl;
    for(int i = 0; i < n; i++){
        cout <<arr[i] <<" ";
    }
    cout<<endl;
    return 0;

}