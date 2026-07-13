#include <iostream>
using namespace std;

int main(){
    char ch;
    
    cout<<"Enter the alphabet: ";
    cin>>ch;
    
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u' ||ch=='A' || ch=='I' ||  ch=='E' || ch=='O' || ch=='U'){
            cout<<"The alphabet is vowel\n";
        }else{
            cout<<"The alphabet is consonant\n";
        }
    }else{
        cout<<"Invalid input!!!\n";
    }
    
    return 0;
    
}