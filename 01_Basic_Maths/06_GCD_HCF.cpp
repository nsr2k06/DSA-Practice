#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;
int main(){
    //WAP TO CHECKK FOR THE GCD !

    int n,n2;
    cout << "Enter The Two Numbers : ";
    cin >> n >> n2;

    int gcd=0;
    for(int i=min(n,n2);i>=1;i--){
        if(n%i==0 && n2%i==0) cout<<"GCD OF THESE TWO NUMBER IS :"<<i;
        break;
    }
  
    return 0;
}