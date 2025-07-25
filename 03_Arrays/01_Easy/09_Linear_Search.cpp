#include <iostream>
using namespace std;
int main(){
    //WAP TO IMPLEMENT LINEAR SEARCH IN C++
    //LINEAR SEARCH IS A SIMPLE SEARCHING ALGORITHM THAT CHECKS EACH ELEMENT IN THE

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

    int key;
    cout << "\nEnter The Element To Search : ";
    cin >> key;

    bool found = false;
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            cout << "Element Found At Index : " << i << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << "Element Not Found!" << endl;
    }
  
  
    return 0;
}