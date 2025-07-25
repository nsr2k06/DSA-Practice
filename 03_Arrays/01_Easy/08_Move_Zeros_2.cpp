#include <bits/stdc++.h>
using namespace std;
int main(){
    //WAP TO MOVE ALL ZEROS TO THE END OF THE ARRAY ! 
    //USING TWO POINTERS APPROACH
  
    int arr[5] = {0, 1, 0, 3, 12};
    cout << "Original Array : ";
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    int i=0, j=5;
    while(i<j){
        if(arr[i]==0 && arr[j]!=0){
            swap(arr[i], arr[j]);
            i++;
            j--;
        } else if(arr[i] != 0) {
            i++;
        } else 
            j--;
    }
  
    cout << "After Moving Zeros To The End of the Array : ";
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }

    return 0;
}