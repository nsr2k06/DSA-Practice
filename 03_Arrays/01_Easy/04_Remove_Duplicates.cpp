#include <iostream>
#include <algorithm>  // for sort()
using namespace std;

int main() {
    // WAP TO REMOVE THE DUPLICATE ELEMENTS FROM THE SORTED ARRAY !

    int n;
    cout << "Enter The Size of an Array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter The " << i + 1 << " Element : ";
        cin >> arr[i];
    }

    cout << "Original Array: ";
    for (int i = 0  ; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Sort the array so that duplicates come together
    sort(arr, arr + n);

    // Remove duplicates in-place
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    cout << "\nArray after removing duplicates: ";
    for (int k = 0; k <= i; k++) {
        cout << arr[k] << " ";
    }

    cout << "\nNew size: " << i + 1 << endl;

    return 0;
}
