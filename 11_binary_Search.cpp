//Implement Binary Search on an array.

#include<iostream>
using namespace std;

void SortArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int BinarySearch(int arr[], int n, int key){
    SortArray(arr, n);
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid  = low + (high - low)/2;
        if(arr[mid] < key){
            low = mid + 1;

        }else if(arr[mid] > key){
            high = mid - 1;

        }else(arr[mid]==key){
            return mid;
        }
    }
    return -1;
}

int main(){
    int n;

    cout<<"Enter size of the array = ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array :\n";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key(No. to search in the array) = ";
    cin>>key;
    
    int result = BinarySearch(arr, n, key);
    if(result != -1) {
        cout << "Element found at index (in sorted array): " << result << "\n";
    } else {
        cout << "Element not found\n";
    }
    return 0;
}