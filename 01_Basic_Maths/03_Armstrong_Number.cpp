#include <iostream>
using namespace std;
int main(){
    //WAP TO CHECK FOR THE ARSMSTRONG NUMBER !

    int n;
    cout << "Enter The Number: ";
    cin >> n;
    
    int copy=n;
    int sum=0;

    while(n>0){
        int ld=n%10;
        sum=sum+(ld*ld*ld);
        n=n/10;
    }

    if (copy==sum) cout<<"The Number "<<copy<<" is Armstrong Number"<<endl;
    else cout<<"The Number "<<copy<<" is Not Armstrong Number"<<endl;
  

    return 0;
}