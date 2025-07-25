#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    //WAP TO MOVE ALL ZERROS TO THE END OF THE ARRAY !

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

    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i<temp.size();i++){
        arr[i] = temp[i];
    }

    for(int i=temp.size();i<n;i++){
        arr[i] = 0;
    }

    cout << "\nArray After Moving Zeros To The End : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
  
    return 0;
}