#include <iostream>
using namespace std;
int main(){
    //WAP TO CHECK WHETHER THE ARRAY IS SORTED OR NOT !

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
  
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){}
        else cout<<"The Array is Not Sorted"<<endl;
    }
    
    cout<<endl;

    cout<<"The Array is Sorted"<<endl;

    return 0;
}