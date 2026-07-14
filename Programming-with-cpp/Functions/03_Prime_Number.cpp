#include <iostream>
using namespace std;

bool prime(int num){
    if (num <= 1) {
    return false;
}
    for (int i = 2; i * i <= num; i++){
        if (num % i == 0){
            return false;
        }
    }
            return true;
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(prime(num)){
        cout<<"The number is prime.";
    }else{
        cout<<"The number is not prime.";
    }
    
    return 0;
}