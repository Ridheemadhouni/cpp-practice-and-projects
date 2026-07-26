#include <iostream>
using namespace std;

int main(){
    char ch;
    
    cout<<"Enter the alphabet: ";
    cin>>ch;
    
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        if(ch>='a' && ch<='z'){
            cout<<"The alphabet is lowercase\n";
        }else{
            cout<<"The alphabet is Uppercase\n";
        }
        
    }else {
        cout<<"invalid input!!\n";
    }
    
    return 0;
}