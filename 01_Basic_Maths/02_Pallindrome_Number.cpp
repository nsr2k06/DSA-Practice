#include <iostream>
using namespace std;
int main(){
    //TO CHECK IF THE NUMBER IS PALLINDROME OR NOT !
    
    int n;
    cout << "Enter The Number: ";
    cin >> n;

    int copy=n;
    int rev_num=0;
    
    while(n>0){
        int last_digit=n%10; //TO GET LAAST DIGIT
        rev_num=rev_num*10+last_digit; 
        n=n/10; //TO REMOVE THE LAST DIGIT
    }

    if (copy==rev_num) cout<<"The Number "<<copy<<" is Pallindrome";
    else cout<<"The Number "<<copy<<" is Not Pallindrome";
    
    return 0;
}