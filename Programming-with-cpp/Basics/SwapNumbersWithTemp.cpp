#include <iostream>
using namespace std;
class Swap{
    public:
    void swapping(int a, int b){
        int temp;
        temp = a;
        a = b;
        b= temp;
        cout<<"value of a: "<<a<<endl;
        cout<<"value of b: "<<b<<endl;
    }
};

int main(){
    int a,b;
    cout<<"enter value of a: ";
    cin>> a;
     cout<<"enter value of b: ";
    cin>> b;
    Swap obj;
   obj.swapping(a, b);
    
    
    
    return 0;
    
}