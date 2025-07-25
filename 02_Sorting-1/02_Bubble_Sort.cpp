#include <bits/stdc++.h>
using namespace std;

    //BUBBLE SORT ALGORITHM

void bubble_sort(int arr[], int n) {
    for (int i = n-1; i>=0; i--) {
        for (int j = 0; j<=i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
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

    bubble_sort(arr,n);

    cout<<"Bubble Sorted Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  
    return 0;
}