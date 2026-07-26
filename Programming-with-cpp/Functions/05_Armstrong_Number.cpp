#include <iostream>
using namespace std;

bool Armstrong(int num){
    int original = num;
    int number = 0;
    while(num>0){
        int digit = num%10;
        number = number + (digit*digit*digit);
        num = num/10;
    }
    return original == number;
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    if(Armstrong(num)){
        cout<<"It is armstrong number.";
    }else{
        cout<<"It is not armstrong number.";
    }
    
    return 0;
}