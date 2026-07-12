#include <iostream>
using namespace std;
class calculator{
    public:
    void add(double a,double b){
        cout<<"addition: "<<a+b<<endl;
    }
    void sub(double a,double b){
        cout<<"subtraction: "<<a-b<<endl;
    }
    void divide(double a,double b){
        if (b!=0){
        cout<<"division: "<<a/b<<endl;
        } else{
            cout<<"wrong input!!!";
        }
    }
    void multiple(double a,double b){
        
        cout<<"multiplication: "<<a*b<<endl;
    
    }
};
int main(){
    double a,b;
    int choice;
    cout<<"====== calculator ======\n";
    cout<<"1.add (+)\n2.subtraction (-)\n3.division (/)"<<endl<<"4.multiplication(*)"<<endl;
    cout<<"enter your choice: ";
    cin>>choice;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    calculator obj;
    switch (choice){
        case 1: 
        obj.add(a,b);
        break;
        case 2: 
        obj.sub(a,b);
        break;
        case 3:
        obj.divide(a,b);
        break;
        case 4: 
        obj.multiple(a,b);
        break;
        default:
        cout<<"wrong";
        break;
    }
    
    return 0;
}
