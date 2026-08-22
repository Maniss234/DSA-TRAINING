#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;

   int arr[n];
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }

   int temp[n];
   int tempSize = 0;

   for(int i=0; i<n-1;i++){
    for(int j=i+1; j<n; j++){
        if(arr[i]==arr[j]){
            bool present = false;
            for(int k =0; k<tempSize;k++){
                if(temp[k]==arr[j]){
                    present = true;
                }
            if(present == false){
                temp[tempSize]=arr[j];
                tempSize++;
            }
            }
        }
    }
   }
   cout<<"The Duplicate elements are:\n";
   for(int i=0; i<tempSize;i++){
    cout<<temp[i];
   }

    return 0;
}