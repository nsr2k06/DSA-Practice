#include <iostream>
using namespace std;
int main(){
    //DIGIT CONCEPT - (SUM / PRODUCT / COUNT /REVERSING)

    int n;
    cout << "Enter The Number: ";
    cin >> n;

    int copy=n;
    int sum=0;
    int product=1;
    int count=0;
    int rev_num=0;

    while(n>0){
        int last_digit=n%10; //TO GET LAAST DIGIT
        count++;
        rev_num=rev_num*10+last_digit;
        sum=sum+last_digit;
        product=product*last_digit;
        n=n/10; //TO REMOVE THE LAST DIGIT
    }

    cout<<"The Total No. of Digits in the Number "<<copy<<" is :"<<count<<endl;
    cout<<"The Reverse of the Number is : "<<copy<<" is :"<<rev_num<<endl;
    cout<<"The Sum of the Number is : "<<copy<<" is :"<<sum<<endl;
    cout<<"The Product of the Number is : "<<copy<<" is :"<<product<<endl;
    return 0;
}