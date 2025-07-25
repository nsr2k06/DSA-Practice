#include<bits/stdc++.h>
using namespace std;    
int main(){
    //WAP TO ADD TWO ARRAYS WITH UNIQUE ELEMENTS
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
    set<int> s; // Using set to store unique elements
    for(int i = 0; i < n; i++) {
        s.insert(a[i]);
    }

    for(int i = 0; i < m; i++) {
        s.insert(b[i]);
    }
    vector<int> temp;
    for(auto it: s){
        temp.push_back(it);
    }
    cout << "Union of two arrays is: ";
    for(int i = 0; i < temp.size(); i++) {
        cout << temp[i] << " ";
    }

}