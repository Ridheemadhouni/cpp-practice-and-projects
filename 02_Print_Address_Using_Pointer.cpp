#include <iostream>
using namespace std;

int main(){
int num;
int* ptr = &num;
cout<<"Enter a number: ";
cin>>num;
cout<<"Address of number: "<<ptr;
    return 0;
}