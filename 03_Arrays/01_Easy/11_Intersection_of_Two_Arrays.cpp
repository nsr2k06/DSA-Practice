#include<bits/stdc++.h>
using namespace std;    
int main(){
    //WAP TO FIND THE INTERSECTION OF TWO ARRAYS.

    int n, m;
    cout << "Enter the size of first array: ";  
    cin >> n;
    cout << "Enter the size of second array: "; 
    cin >> m;

    int a[n], b[m];         
    
    cout << "Enter elements of first array: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter elements of second array: ";
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int i = 0, j = 0;

    vector<int> ans;
    while(i < n && j < m) {
        if(a[i] < b[j]) {
            i++;
        } else if(a[i] > b[j]) {
            j++;
        } else {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    cout << "Union of two arrays is: ";
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}