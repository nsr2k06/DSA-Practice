#include <iostream>
using namespace std;
int main(){
    //WAP TO CHECK WHETHER THE INPUTED NUMBER IS PRIME NUMBER OR NOT !

    int n;
    cout << "Enter The Number: ";
    cin >> n;

    int count=0;

    for(int i=1;i<=n;i++){
        if(n%i==0) count++;
    }

    if(count==2) cout<<"The Number "<<n<<" is Prime Number";
    else cout<<"The Number "<<n<<" is Not Prime Number";

  
    return 0;
}
