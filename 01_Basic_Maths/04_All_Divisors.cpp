#include <iostream>
using namespace std;
int main(){
    //WAP TO PRINT ALL THE POSSIBLE DIVISORS OF A NUMBER !

    int n;
    cout << "Enter The Number: ";
    cin >> n;

    for(int i=1;i<=n;i++){
        if(n%i==0) cout<<i<<" ";
    }

    return 0;
}