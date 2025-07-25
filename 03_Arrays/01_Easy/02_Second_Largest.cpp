#include <iostream>
using namespace std;
int main(){
    // WAP TO FIND THE SECOND LARGEST ELEMENT IN AN ARRAT !

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

    cout<<endl;

    int max=arr[0];
    int smax=-1;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

     for(int i=0;i<n;i++){
        if(arr[i]>smax && arr[i]!=max){
            smax=arr[i];
        }
    }
  
    cout<<"Second Largest Element is : "<<smax;

    return 0;
}