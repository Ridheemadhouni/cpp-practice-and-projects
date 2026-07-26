#include <iostream>
using namespace std;

int main(){
    int num,square;
   
    
    cout<<"Enter the number: ";
    cin>>num;
   
    square = num*num;
    bool automorphic = true;
    while(num>0){
        if(num%10 != square%10){
            automorphic = false;
            break;
        }
        num= num/10;
        square = square /10;
    }
     if(automorphic){
        cout << "It is Automorphic number";
    }
    else{
        cout << "It is not Automorphic number";
    }

    
    return 0;
}