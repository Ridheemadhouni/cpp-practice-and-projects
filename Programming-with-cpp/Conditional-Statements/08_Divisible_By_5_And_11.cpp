#include <iostream>
using namespace std;

int main(){
    int num;
    
    cout<<"Enter the number: ";
    cin>>num;
    
    if(num%5==0 && num%11==0){
        cout<<"The number is divisible by both 5 and 11.\n";
    }else if(num%5==0){
        cout<<"The number is divisible by 5.\n";
    }else if(num%11==0){
        cout<<"The number is divisible by 11.\n";
    }else{
        cout<<"The number is neither divisible by 5 nor by 11.\n";
    }
    
    
    return 0;
    
}