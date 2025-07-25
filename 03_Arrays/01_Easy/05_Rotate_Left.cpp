#include <iostream>
using namespace std;
int main(){
    // WAP TO ROTATE THE ARRAY LEFT BY 1 PLACE !
  
    int n;
    cout << "Enter The Size of an Array : ";
    cin >> n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
    cout<<"Enter The "<<i+1<<" Element : ";
    cin>>arr[i];
    }
    
    cout<<"Original Array :";
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }

    int temp=arr[0];

    // Rotate the array left by 1 place
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
  
    arr[n-1]=temp;

    cout<<endl;

    cout<<"Rotated Array :";
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}