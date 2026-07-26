#include <iostream>
using namespace std;

int main(){
    int num,digit,original;
    int sum=0;
   
    cout<<"Enter the number: ";
    cin>>num;
    original = num;
    while(num>0){
        digit = num%10;
         int fact=1;
        for(int i = 1;i<=digit;i++){
            fact = fact*i;
             
        }
        sum+=fact;
        num = num/10;
    }
    if(sum == original){
        cout<<"It is strong number";
    }else {
        cout<<"It is not strong number";
    }
    return 0;
}