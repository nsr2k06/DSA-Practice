#include <iostream>
using namespace std;
int main(){
    
    // Program to find the largest element in a Array of integers
    
    int n, largest;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "No elements to compare." << endl;
        return 1;
    }

    cout << "Enter " << n << " elements: ";
    cin >> largest; // Read the first element as the initial largest

    for (int i = 1; i < n; i++) {
        int num;
        cin >> num;
        if (num > largest) {
            largest = num; // Update largest if current number is greater
        }
    }

    cout << "The largest element is: " << largest << endl;

      return 0;
}