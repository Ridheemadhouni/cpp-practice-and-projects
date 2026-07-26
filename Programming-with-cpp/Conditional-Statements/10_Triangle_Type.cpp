#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    
    cout<<"Enter the first side value: ";
    cin>>a;
    
    cout<<"Enter the second side value: ";
    cin>>b;
    
    cout<<"Enter the third side value: ";
    cin>>c;
    
    if((a+b>c) && (a+c>b) && (b+c>a)){
      if((a==b) && (c==b)){
          cout<<"It is Equilateral Triangle\n";
      } else if((a==b)||(b==c)||(c==a)){
          cout<<"It is Isosceles Triangle\n";
      }else{
          cout<<"It is Scalene Triangle\n";
      } 
    }else{
        cout<<"Invalid input.\n";
    }
    
    return 0;
}