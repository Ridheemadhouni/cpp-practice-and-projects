#include <iostream>
using namespace std;

int reversenum(int num){
    int reverse = 0;
    while(num>0){
        int digit = num%10;
        reverse = reverse*10 + digit;
        num = num/10;
    }
    return reverse;
}

int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    
    cout<<"Reverse number: "<<reversenum(num);
    
    
    return 0;
}