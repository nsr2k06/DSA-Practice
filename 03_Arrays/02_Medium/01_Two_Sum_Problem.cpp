#include <iostream>
using namespace std;
int main(){

    //WAP TO CHECK FOR THE TWO SUM PROBLEM
    int n;
    cout << "Enter The Size of an Array : ";
    cin >> n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
    cout<<"Enter The "<<i+1<<" Element : ";
    cin>>arr[i];
    }
    
    int target;
    cout<<"Enter The Targeted Element :";
    cin >> target;

    cout<<"Original Array :";
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(arr[i]+arr[j]==target){
                cout<<i+1<<" "<<j+1<<endl;

            }
        }
    }  
    return 0;
}