#include <iostream>
using namespace std;

int main(){
    int num,digit;
    int reverse= 0;
    cout<<"Enter the number: ";
    cin>>num;
    while (num>0){
        digit = num%10;
        reverse = reverse*10+digit;
        num = num/10;
        
    }
    cout<<"reverse number: "<<reverse;
    return 0;
}