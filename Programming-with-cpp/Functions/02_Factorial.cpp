#include <iostream>
using namespace std;

int factorial(int num){
    int fact = 1;
    for(int i=1;i<=num;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    if(num<0){
        cout<<"wrong input.\n";
    }else{
        cout<<"factorial of "<<num<<" is: "<<factorial(num)<<endl;
    }

    
    return 0;
}