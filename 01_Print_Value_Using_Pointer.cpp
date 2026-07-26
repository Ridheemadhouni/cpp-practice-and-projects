#include <iostream>
using namespace std;

int main(){
    int num = 9;
    int* ptr = &num;
    cout<<"The number is: "<<*ptr;

 
    return 0;
}