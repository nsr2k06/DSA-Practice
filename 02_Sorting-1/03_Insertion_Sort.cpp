#include <bits/stdc++.h>
using namespace std;

    //INSERTION SORT ALGORITHM

void insertion_sort(int arr[], int n) {
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[i]){
            swap(arr[j-1], arr[j]);
        }
    }
}

int main(){
    

    int n;
    cout << "Enter The Size of an Array : ";
    cin >> n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
    cout<<"Enter The "<<i+1<<" Element : ";
    cin>>arr[i];
    }

    cout<<"Original Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  
    cout<<endl;

    insertion_sort(arr,n);

    cout<<"Bubble Sorted Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  
    return 0;
}