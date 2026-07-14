#include <iostream>
using namespace std;

int main(){
    int num,digit,original;
  int  reverse = 0;
    cout<<"Enter the number: ";
    cin>>num;
    original = num;
    while(num>0){
        digit = num%10;
        reverse = reverse + (digit*digit*digit);
        num = num/10;
    }
   if(reverse == original){
       cout<<"It is Armstrong Number";
   }else {
       cout<<"It is not Armstrong Number";
   }
    return 0;
}