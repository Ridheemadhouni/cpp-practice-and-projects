#include <iostream>
using namespace std;

void max(int a,int b,int c){
   if(a>=b && a>=c){
       cout<<"Maximum number is: "<<a;
   }else if(b>=a && b>=c){
       cout<<"Maximum number is: "<<b;
   }else{
       cout<<"Maximum number is: "<<c;
   }
}

int main(){
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    max(a,b,c);
    
    return 0;
}