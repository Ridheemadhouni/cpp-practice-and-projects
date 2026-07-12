#include <iostream>
using namespace std;
#define PI 3.14

int main() {
    float r;
    cout<<"enter value of radius: ";
    cin>>r;
   double area = PI*r*r;
    cout<<"area of circle:"<<area<<endl;
    return 0;
}