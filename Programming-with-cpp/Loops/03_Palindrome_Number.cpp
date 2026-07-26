#include <iostream>
using namespace std;

int main(){
    int num,digit,original;
    int reverse = 0;
   
    cout<<"Enter the number: ";
    cin>>num;
     original = num;
   while(num>0){
        digit = num%10;
        reverse = reverse*10+digit;
        num=num/10;
    }
    if(reverse == original){
        cout<<"It is Palindrome Number";
        
    }else{
        cout<<"It is not Palindrome Number";
    }
    return 0;
}