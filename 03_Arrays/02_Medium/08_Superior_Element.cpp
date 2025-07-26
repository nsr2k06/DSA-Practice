#include<bits/stdc++.h>
using namespace std;    
//WAP TO FIND THE SUPERIOR ELEMENTS IN AN ARRAY

int main(){
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

    cout << endl;

    vector<int> ans;
    int max_so_far = INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i] > max_so_far){
            ans.push_back(arr[i]);
        }
        else {
            max_so_far = max(max_so_far, arr[i]);
        }
    }

    sort(ans.begin(), ans.end());
    cout << "Superior Elements in the Array : ";
    for(int i=ans.size()-1;i>=0;i--){
        cout << ans[i] << " ";
    }
}