#include <iostream>
using namespace std;

int main(){
    int a,b;
    
    cout<<"Enter the first number: ";
    cin>>a;
    
    cout<<"Enter the second number: ";
    cin>>b;
    
    if(a>b){
       cout<<"The greater number is: "<<a<<endl; 
    }else if(a==b){
        cout<<"both numbers are equal "<<a<<" = "<<b<<endl;
    }else{
        cout<<"The greater number is: "<<b<<endl;
    }
    
    return 0;
}