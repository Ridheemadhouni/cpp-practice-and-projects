#include <iostream>
using namespace std;

bool palindrome(int num){
    int reverse = 0;
    int number = num;
    while(num>0){
        int digit = num%10;
        reverse = reverse*10+digit;
        num = num/10;
    }
  return number==reverse;  
}

int main() {
    int num;
    
    cout<<"Enter the number:";
    cin>>num;
    if(palindrome(num)){
        cout<<"It is palindrome.";
    }else{
        cout<<"It is not palindrome.";
    }
    
    return 0;
}