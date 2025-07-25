//wap to rotate d places in an array
#include <iostream>
#include <algorithm>  // for sort()             
using namespace std;
int main() {
    // WAP TO ROTATE THE ARRAY RIGHT BY D PLACES !

    int n, d;
    cout << "Enter The Size of an Array: ";
    cin >> n;
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cout << "Enter The " << i + 1 << " Element: ";
        cin >> arr[i];
    }
    
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << "\nEnter the number of places to rotate: ";
    cin >> d;

    // Normalize d in case it's greater than n
    d = d % n;

    // Reverse the entire array
    reverse(arr, arr + n);
    
    // Reverse the first d elements
    reverse(arr, arr + d);
    
    // Reverse the remaining n-d elements
    reverse(arr + d, arr + n);

    cout << "\nRotated Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}