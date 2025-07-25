#include <iostream>
using namespace std;
int main(){
    //WAP TO GET THE SINGLE ELEMENT IN A SORTED ARRAY
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

    int xorr=0;
    for(int i=0;i<n;i++){
        xorr ^= arr[i]; //xorr=xorr^arr[i];
    }
    
    cout << "\nSingle Element in the Array is : " << xorr << endl;
  
    return 0;
}