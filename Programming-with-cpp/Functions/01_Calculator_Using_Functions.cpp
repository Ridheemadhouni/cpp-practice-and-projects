#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int multiple(int a, int b){
    return a*b;
}
int divide(int a, int b){

    return a/b;
}
int main(){
    int a,b,choice;
    
    cout<<"====== Calculator ======\n";
    cout<<"1. Addition\n";
    cout<<"2. Subtraction\n";
    cout<<"3. Division\n";
    cout<<"4. Multiplication\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
   switch(choice){
        case 1:
             cout<<"The answer is: "<<add(a,b)<<endl;
               break; 
        case 2:
                cout<<"The answer is: "<<sub(a,b)<<endl;
                break;
        case 3:
             cout<<"The answer is: "<<divide(a,b)<<endl;
             break;
        case 4:
              cout<<"The answer is: "<<multiple(a,b)<<endl;
              break;
        default:
              cout<<"invalid.";
            }
   
    return 0;
}